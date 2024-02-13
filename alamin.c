#include<stdio.h>
int main()
{
    int travelingCost,stayingTime,stayingPrice,foodCost,totalCost,movingAroundCost;
    char decision,transportationType,hotelType;

    printf("Want to go to Shajek?(press'y' for yes and'n'for no)");
    scanf("%c",&decision);
    switch (decision)
    {
    case 'y':
        printf("Great Choice!\n");
        printf("\n");


        printf("What type of transportation do you prefer?(press 'a' for AC bus and 'n' for non-AC bus)");
        scanf(" %c",&transportationType);
        switch (transportationType)
        {
        case 'a':
            /* code */
            printf("For AC bus,it will cost 3200 taka (both up and down)also 2700 tk additional for CNG\n");
            travelingCost=8600;
            break;
        case'n':
            printf("For non-AC bus,it will cost 1600 taka(both up and down)also 2700 additonal for CNG\n");
            travelingCost=7000;
            break;
        default:
            printf("Invalid option for transportation\n");
            break;

        }
        printf("\n");

        printf("What type of hotel do you want to stay? (press 'a' for average and 'e' for expensive)");
        scanf(" %c",&hotelType);
        switch (hotelType)
        {
        case 'a':
            /* code */
            printf("You could stay at Meghpunji Resort (per day cost 5000 taka)\n");
            stayingPrice=5000;
            break;
        case'e':
                printf("You could at Megpolli Resort (per day cost 6500 taka)\n");
            stayingPrice=6500;
            break;
        default:
            printf("Invalid option for hotel\n");
            break;
        }
        printf("\n");
        printf("What's your budget on food per day?");
        scanf("%d",&foodCost);
        printf("\n");

        printf("How long (days) do you want to stay?");
        scanf("%d",&stayingTime);
        printf("\n");
        printf("You should visit: \n1.Alutila Guha (cost-1000tk)\n2.Rising Waterfall(cost-1000tk)\n3.Lushai Heritage Village(cost-1000tk)\n4.Jhulonto Bridge(cost-1000tk)\n");
        movingAroundCost=4000;
        int fTotal=foodCost*stayingTime;
        totalCost=fTotal+stayingPrice+travelingCost+movingAroundCost;

        printf("\n");
        printf("So,your travelling cost will be %d Taka.\n",travelingCost);
        printf("If you want to stay for %d days,then your\n",stayingTime);
        printf("Food cost will be:%d Taka\n",fTotal);
        printf("Staying cost will be:%d Taka\n",stayingPrice);
        printf("Your total cost will be: %d Taka",totalCost);
        printf("\n");
        break;
    case'n':
        printf("Sorry,I don't have any other suggestion.\n");
        break;
    default:
        printf("Please type y for yes and n for no\n");
        break;
    }
    return 0;

}
