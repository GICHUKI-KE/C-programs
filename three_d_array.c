// Simple C program
/*
Name: David Gichuki
Reg No: CT100/G/26130/25
Description:
This program represents a hotel chain with 3 branches.
Each branch has 5 floors and 10 rooms per floor.
It uses a 3D array to store occupancy (1 = occupied, 0 = vacant)
and calculates the total number of occupied rooms across all branches.
*/

#include <stdio.h>

int main() {
    printf(" Hotel Chain Occupancy Tracker\n");

    int chain[3][5][10]; // 3 branches × 5 floors × 10 rooms
    int branch, floor, room;
    int totalOccupied = 0;

    // Input occupancy (1 for occupied, 0 for vacant)
    for (branch = 0; branch < 3; branch++) {
        printf("\n Branch %d \n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            printf("Enter data for Floor %d (10 rooms):\n", floor + 1);

            for (room = 0; room < 10; room++) {
                printf("Room %d (1 = Occupied, 0 = Vacant): ", room + 1);
                scanf("%d", &chain[branch][floor][room]);

                // Count occupied rooms
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display total occupied rooms
    printf("\nTotal number of occupied rooms across all branches: %d\n", totalOccupied);

    printf("\nProgram ended successfully.\n");
    return 0;
}