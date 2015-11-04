#import "car.h"
#import "racecar.h"

int main(int argc, char* argv[]) {
	Car *chevy = [[Car alloc] Name: @"Chevrolette" MaxSpeed: 95 Color: @"black" AmountOfEngineValve: 4];
	Racecar *f1 = [[Racecar alloc] Name: @"Ferrari" Sponsor: @"Bug2Bug" MaxSpeed: 220 Color: @"red" AmountOfEngineValve: 40 AmountOfGearbox: 7 presenceOfParachute: YES];
	[chevy printDetail];
	[f1 printDetail];
	return 0;
}