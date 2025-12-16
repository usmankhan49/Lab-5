#include<stdio.h>
int main(){
	int email_type, user_action;
	printf("Enter phishing email type.\n Press 1 for Fake login Page.\n Press 2 for Malicious link.\n Press 3 for Urgent Money Request.\n");
	scanf("%d", &email_type);
	switch(email_type){
		case 1:
			printf("Enter User Action:\n");
			printf("1 = Clicked\n");
            printf("2 = Reported\n");
            printf("3 = Ignored\n");
            printf("Enter the user action (1-3): ");
            scanf("%d", &user_action);
            printf("\nEmial Type: Fake Login Page\n");
            if (user_action == 1){
                printf("Severity Level: HIGH RISK (Clicked on Fake Login Page)\n");
			}else if (user_action == 2){
                printf("Severity Level: LOW RISK (Reported Fake Login Page)\n");
			}else if (user_action == 3){
                printf("Severity Level: MEDIUM RISK (Ignored Fake Login Page)\n");
            }else{
                printf("Invalid user action.\n");
            }
			break;
		case 2:
			printf("Enter User Action:\n");
			printf("1 = Clicked\n");
            printf("2 = Reported\n");
            printf("3 = Ignored\n");
            printf("Enter the user action (1-3): ");
            scanf("%d", &user_action);
            printf("\nEmail Type: Malicious Link\n");
            if (user_action == 1){
                printf("Severity Level: HIGH RISK (Clicked on Malicious Link)\n");
			}else if (user_action == 2){
                printf("Severity Level: LOW RISK (Reported Malicious Link)\n");
			}else if (user_action == 3){
                printf("Severity Level: MEDIUM RISK (Ignored Malicious Link)\n");
            }else{
                printf("Invalid user action.\n");
            }
			break;
		case 3:
			printf("Enter User Action:\n");
			printf("1 = Clicked\n");
            printf("2 = Reported\n");
            printf("3 = Ignored\n");
            printf("Enter the user action (1-3): ");
            scanf("%d", &user_action);
            printf("\nEmail Type: Urgent Money Request\n ");
            if (user_action == 1){
                printf("Severity Level: HIGH RISK (Clicked on Urgent Money Request)\n");
			}else if (user_action == 2){
                printf("Severity Level: LOW RISK (Reported Urgent Money Request)\n");
			}else if (user_action == 3){
                printf("Severity Level: MEDIUM RISK (Ignored Urgent Money Request)\n");
            }else{
                printf("Invalid user action.\n");
            }
			break;
		default:
			printf("Invalid email type\n");
	}
	return 0;
}
