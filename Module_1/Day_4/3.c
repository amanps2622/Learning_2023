#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time t1, struct Time t2) {
    struct Time diff;

    // Convert both time periods to seconds
    int time1InSeconds = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int time2InSeconds = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    // Calculate the absolute difference in seconds
    int diffInSeconds = (time1InSeconds > time2InSeconds) ? (time1InSeconds - time2InSeconds) : (time2InSeconds - time1InSeconds);

    // Convert the difference back to hours, minutes, and seconds
    diff.hours = diffInSeconds / 3600;
    diffInSeconds %= 3600;
    diff.minutes = diffInSeconds / 60;
    diff.seconds = diffInSeconds % 60;

    return diff;
}

int main() {
    struct Time time1, time2, diff;

    // Read the first time period
    printf("Enter the first time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &time1.hours, &time1.minutes, &time1.seconds);

    // Read the second time period
    printf("Enter the second time period (hh:mm:ss): ");
    scanf("%d:%d:%d", &time2.hours, &time2.minutes, &time2.seconds);

    // Calculate the difference between the time periods
    diff = calculateTimeDifference(time1, time2);

    // Display the difference
    printf("\nDifference between the time periods:\n");
    printf("Hours: %d\n", diff.hours);
    printf("Minutes: %d\n", diff.minutes);
    printf("Seconds: %d\n", diff.seconds);

    return 0;
}