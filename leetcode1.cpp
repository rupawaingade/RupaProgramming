#include<iostream>
void removedList(int list[],int length)
{
    int begin = 0;
    int next = begin +1;

   if( list[begin]==list[next])
   {
       begin = next;
       next = next +1;
       length = length -1;
   }
   else if(list[begin]!= list[next])
   {
       next = begin;
       begin  = next+1;
   }

}  
main()
{
 int list[] = {1,1,1,2,3,4};
 int i;
 
 int length =sizeof (list)/sizeof(list[0]);
 removedList(list,length);
 std::cout<<"Length is:"<<length;
 std::cout<<"list is:"<<list;

 
  return 0;
}
