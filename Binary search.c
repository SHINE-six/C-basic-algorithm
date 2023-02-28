#include <stdio.h>

int main()
{
    int key,start,end,mid;
    /*the value user want to find,
    the left start value,
    the right ending value,
    the middle of the finsing range
    */
    int num[15] = {1,3,5,7,9,11,13,15,17,19,21,24,26,29,33};
    start = 0; end = 15; //set start 0 for the first index; end is 15 for the last index
    printf("Enter the key value\n>");
    scanf("%d",&key);

    do
    {
        mid = (end + start)/2;  //finding the middle of the finding range
        if (key < num[mid])        //key is lesser than the middle value
        {
            end = mid;                  // move ending to the middle so later the finding range will be the from start to 'ex-middle'(now is known as end)
        }
        else if (key > num[mid])    //key is more than middle value
        {
            start = mid;        // move start to the middle so later the finding range will be the from start 'ex-middle'(now is known as start) to end
        }

        if (start == end - 1)   //value not inside result in start and end beside each other; so start = end-1 meaning the value not here and auto break from the loop
        {
            break;
        }
    } while (key != num[mid]);  //loop the whole thing until key value is found in the middle of the finding range

    if (key == num[mid])  
    {
        printf("The key value '%d' is located at the location '%d' of the array",key,mid);
    }
    else
    {
    printf("The key value is not inside the array");
    }



    return 0;
}