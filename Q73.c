#include <stdio.h>

int main() {
    int votes[5] = {0}; 
    int spoilt_ballots = 0;
    int ballot_number;

    printf("Enter ballot numbers (0 to stop):\n");

    while (1) {
        scanf("%d", &ballot_number);

        if (ballot_number == 0) {
            break;
        }

        if (ballot_number >= 1 && ballot_number <= 5) {
            votes[ballot_number - 1]++;
        } else {
            spoilt_ballots++;
        }
    }

    printf("\nvote counts:\n");
    for (int i=0; i<5; i++) {
        printf("candidate %d: %d votes\n", i + 1, votes[i]);
    }

    printf("spoilt ballots: %d\n", spoilt_ballots);

    return 0;
}