#include <stdio.h>

int findingcost(char store[], char goal[]){
    int total = 0;
    for (int i = 0; i < 14; i++)
    {
        if (goal[i] > store[i])
        {
            total += goal[i] - store[i];
        }
        else{
            total += store[i] - goal[i];
        }
    }
    return total;
}

int main(){
    char store[14];
    char goal[14] = "METAHEURISTICS";

    for (int i = 0; i < 14; i++)
    {
        printf("Enter the num %d character: ",i+1);
        scanf(" %c",&store[i]);    
    }

    int cost = findingcost(store, goal);
    printf("\nIteration 0\n");
    printf("Cost: %d\n",cost);
    printf("Solution: %s\n", store);

    int loop = 0;
    while (cost != 0)
    {
        
        for (int i = 0; i < 14; i++)
        {
            cost = 0;
            if (goal[i] != store[i] )
            {
                char open[2];
                open[0] = store[i] - 1;
                open[1] = store[i] + 1;

                int H_open[2]; //heuristic
                store[i] = open[0];
                H_open[0] = findingcost(store, goal);
                store[i] = open[1];
                H_open[1] = findingcost(store, goal);

                if (H_open[0] < H_open[1]){
                    store[i] = open[0];
                }
                else if (H_open[1] < H_open[0]){
                    store[i] = open[1];
                }
            }
        }
        loop ++;
        cost = findingcost(store, goal);
        printf("\nIteration %d\n",loop);
        printf("Cost: %d\n",cost);
        printf("Solution: %s\n", store);
    }
    char end;
    printf("\npress any key (then enter) to exit\n");
    scanf(" &c",&end);
}