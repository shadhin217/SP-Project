#include <stdio.h>
int main() {
    int choice,service_codes[3] = {101, 102, 103},search_code,found,i;
    do {
        printf("RoboDesk Campus Service Kiosk\n");
        printf("1. Check Library Card Status\n");
        printf("2. Check Lab Access Permission\n");
        printf("3. Check Medical Booth Token\n");
        printf("4. Search Service by Service Code\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("\nService Available: Library Card Status\n");
                break;
            case 2:
                printf("\nService Available: Lab Access Permission\n");
                break;
            case 3:
                printf("\nService Available: Medical Booth Token\n");
                break;
            case 4:
                printf("\nEnter Service Code to search: ");
                scanf("%d", &search_code);
                found = 0;
                for (i = 0; i < 3; i++) {
                    if (service_codes[i] == search_code) {
                        found = 1;
                        if (search_code == 101) {
                            printf("\nService Name: Library Card Status\n");
                        } else if (search_code == 102) {
                            printf("\nService Name: Lab Access Permission\n");
                        } else if (search_code == 103) {
                            printf("\nService Name: Medical Booth Token\n");
                        }
                        break;
                    }
                }
                if (!found) {
                    printf("\nService Not Found\n");
                }
                break;
            case 5:
                printf("\nExiting RoboDesk... Thank you!\n");
                break;
            default:
                printf("\nInvalid Choice\n");
                break;
        }
    } while (choice != 5);
    return 0;
}
