//Name____Muhammad Asim
//Reg:____3956|FBAS|BSCS|18
//Section_B
#include <iostream>
#define MAX 5
using namespace std;
class Queue
{
	int queue[MAX];
	int rear=-1,front=-1;
	public:
		Queue(int r=-1,int f=-1):rear(r),front(f){	}
		void eneque(int);
		void dequeue();
		void display();
		int peak();
};
int main()
{
	Queue q;
	int ch,peak_val,val;
	do
	{
		cout<<"       Main Menu\n";
		cout<<"1.Eneque\n";
		cout<<"2.Dequeue\n";
		cout<<"3.Peak\n";
		cout<<"4.Show Queue\n";\
		cout<<"5.Exit\n";
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{	
	        case 1:
	        	cout<<"Enter value: ";
	        	cin>>val;
	        	q.eneque(val);
	        	system("cls");
	        	break;
	        case 2:
	        	q.dequeue();
	        	//system("cls");
	        	break;
	     	case 3:
	     		peak_val=q.peak();
	     	cout<<"Front value is "<<peak_val<<endl;
	     		break;
	   		case 4:
	   			q.display();
	   			break;
	     	case 5:
	     		exit(-1);
	     		break;
		}
	}while(1);
	return 0;
}
void Queue:: eneque(int val)
{
   if((front==0 && rear==MAX-1)|| (front=rear+1))
   {
        cout<<"Queue overflow\n";
   		return;
   }
   if(front==-1)
   	{
   		front=0;
   		rear=0;
	}
	else
	{
		if(rear==MAX-1)
		rear=0;
		else
		rear++;
	}
   queue[rear]=val;
}
void Queue:: dequeue()
{
	if(front==-1) 
	{
		cout<<"Queue underflow";
	   	return;
	}
	if(front==rear)
	{
		front=0;
	}
	else
	 front++;
}
void Queue:: display()
{
	cout<<"Queue is: ";
	if(front==-1)
	{
		cout<<"empty.\n";
	}
	if(front<=rear)
	{
		while(front<=MAX-1)
		{
			cout<<queue[front]<<" ";
			front++;
		}
	}
	else
	{
		while(front<=MAX-1)
		{
			cout<<queue[front]<<" ";
			front++;
		}
	}
	cout<<"\n";
}
int Queue:: peak()
{
	int val;
	val=queue[front];
	return val;
}
