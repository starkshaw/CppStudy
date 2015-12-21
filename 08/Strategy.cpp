#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

///////////////// Sorters

/** abstract base class for classes that implement sorting algorithms **/
class Sorter {
public:
  /** defines a pure virtual interface for algorithms that sort a vector of strings **/
  virtual vector<string> sort_strings(const vector<string> &strings) const = 0;
};

class AscSorter: public Sorter {
public:
  virtual vector<string> sort_strings(const vector<string> &strings) const {
    /** Delare an output array and initialise it with the contents of the input array **/
    vector<string> output = strings;

    /** Here we use the std library sort algorithm, passing the beginning and end 
	iterators of the output. The method also takes a lambda function that 
	compares two input strings and returns true if the first is smaller than
	the second, or true otherwise **/ 
    std::sort(output.begin(), output.end(), [](string a, string b){ return a<b; });

    /** Return the resulting sorted array **/
    return output;
  }
};

/*** STEP 1: Provide a definition of a class called "DescSorter" similar to "AscSorter" but 
     where sorts the strings in descending order ***/

class DescSorter: public Sorter {
public:
  virtual vector<string> sort_strings(const vector<string> &strings) const {
    vector<string>output = strings;
    
    std::sort(output.begin(), output.end(), [](string a, string b){ return a>b; }); 
    return output;
  }
};

////////////////// Selectors

/** abstract base class for classes that implement sorting algorithms **/
class Selector {
public:
  /** defines a pure virtual interface for algorithms that select a subset of strings
      from and input vector of strings **/
  virtual vector<string> select_strings(const vector<string> &strings) const = 0;
};

class IdentitySelector:public Selector {
public:
  virtual vector<string> select_strings(const vector<string> &strings) const{
    return strings;
  }
};


/*** STEP 2: Alter the class definition the comment below such with the necessary code to declare a class 
     called "FirstFive" which should be a Selector, where this particular class selects
     the first five elements of the strings vector passed to the select_strings method ***/
class FirstFive: public Selector {
public:
  virtual vector<string> select_strings(const vector<string> &strings) const{
    vector<string> output = strings;
    /*** STEP 3: Add code here that first checks if output already contains five or less elements.
	 If so it should simply return output ***/
      if(output.size()<=5) {
        return output;
      } else {
        for(int i = 0; i < output.size()-5; i++) {
          output.pop_back();
        }
        return output;
      }
    /*** STEP 4: Add code here that reduces output to its first five elements ***/
  }
};

////////////////// Container

class Container {
public:
  Container(Sorter *sorter, Selector *selector): processed_(true), sorter_(sorter), selector_(selector) {};

  void set_sorter(Sorter *sorter) {
    sorter_ = sorter;
    processed_ = false; // invalidates out_strings for next call to get_strings
  }

  void set_selector(Selector *selector) {
    selector_ = selector;
    processed_ = false; // invalidates out_strings for next call to get_strings
  }

  void set_strings(vector<string> strings) { 
    in_strings_ = strings; 
    processed_ = false; // invalidates out_strings for next call to get_strings
  };

  vector<string> get_strings() {
    if (!processed_)
      process_strings();

    return out_strings_;
  }

protected:
  virtual void process_strings() { 
    out_strings_ = sorter_->sort_strings(in_strings_); 
    out_strings_ = selector_->select_strings(out_strings_);
    processed_ = true;
  };

  bool processed_;

  vector<string> in_strings_, out_strings_;

  Sorter *sorter_;
  Selector *selector_;
};

void print_strings(const vector<string> &strings) {
  cout << "{";
  for (auto &x : strings) cout << x << ", ";
  // remove last two characters, from output by sending backspace twice
  cout << "\b\b" << "}\n";
};

int main() {
  vector<string> names {"Abraham", "Zachary", "James", "Yvonne", "Patrick", "Tim"};

  AscSorter asc;

  IdentitySelector id;
 
  Container container(&asc, &id);

  container.set_strings(names);

  /*** STEP 5: Add code here to create a DescSorter and FirstFive selector ***/
  DescSorter desc;
  
  container.set_sorter(&desc);
  
  FirstFive firstFive;
  
  container.set_selector(&firstFive);
  
  /*** STEP 6: Add code to switch the behaviour of the container object to ***/
  /***         use the DescSort and FirstFive selector to pick the bottom  ***/
  /***         five names from the list                                    ***/

  vector<string> output = container.get_strings();
  print_strings(output);
  
  return 0;
}



