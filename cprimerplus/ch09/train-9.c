#include <stdio.h>

void show_menu(void)
{
    printf("Please choose one of the following:\n");
    printf("1) copy files            2) move files\n");
    printf("3) remove files          4) quit\n");
    printf("Enter the number of your choice:");
}

int range(int up_max, int low_min)
{
    int enter;
    if (scanf("%d", &enter) == 1)
    {
        while (enter < up_max || enter > low_min)
        {
            printf("Please enter 1-4!\n");
            show_menu ();
            if (scanf("%d", &enter) != 1 || enter == 4)
            {
                enter = 4;
                break;
            }
        }
    }
    else
        enter = 4;
    return enter;

}

int main()
{
    int choice;
    do
    {
        show_menu ();
        choice = range( 1, 4);
        switch (choice)
        {
            case 1:
            case 2:
            case 3:
                printf("doing successfully!\n");
                break;
        }
    } while (choice != 4);
    printf("Bye!");
    return 0;
}
