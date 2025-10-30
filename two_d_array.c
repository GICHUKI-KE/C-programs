// Simple C program
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program simulates room occupancy for one hotel branch.
It uses a 2D array (5 floors × 10 rooms).
1 means occupied, 0 means vacant.
It counts and displays the number of occupied and vacant rooms per floor.
*/

#include <stdio.h>

int main() {
    printf("Room Occupancy Tracker (One Branch) \n");

    int occupancy[5][10]; // 5 floors × 10 rooms
    int floor, room;
    int occupied, vacant;

    // Input occupancy (can be 1 or 0)
    for (floor = 0; floor < 5; floor++) {
        printf("\nEnter occupancy for Floor %d (10 rooms):\n", floor + 1);
        for (room = 0; room < 10; room++) {
            printf("Room %d (1=Occupied, 0=Vacant): ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }
    }

    // Count occupied and vacant per floor
    for (floor = 0; floor < 5; floor++) {
        occupied = vacant = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }
        printf("\nFloor %d -> Occupied: %d, Vacant: %d\n", floor + 1, occupied, vacant);
    }

    printf("\nProgram ended successfully.\n");
    return 0;
}