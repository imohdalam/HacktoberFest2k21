#include <iostream>
using namespace std;

struct Array
{
	int a[100];
	int size;
	int length;
};

void display(struct Array &arr)
{
	cout<<endl;
	for(int i=0; i<arr.length; i++)
	{
	  cout<<arr.a[i]<<" ";
    }
    cout<<endl;
}

void append(struct Array &arr, int n)
{
	if(arr.length<arr.size)
	 arr.a[arr.length++]=n;
}

void insert(struct Array &arr, int n, int index)
{
	if(index>=0 && index<=arr.length)
	{
		for(int i=arr.length; i>index; i--)
		{
			arr.a[i]=arr.a[i-1]; 
		}
		arr.a[index]=n;
		arr.length++;
	}	
}

int deletion(struct Array &arr, int n)
{
	for(int i=0; i<arr.length; i++)
	{
		if(arr.a[i]==n)
		{
			for(;i<arr.length;i++)
			  arr.a[i]=arr.a[i+1];
			cout<<"\nElement deleted Successfully."<<endl;
			arr.length--;
			cout<<"\nUpdated Array."<<endl;
			return 1;
		}
	}
	cout<<"\nGiven element NOT found for deletion."<<endl;
}

int search(struct Array &arr, int n)
{
	for(int i=0; i<arr.length; i++)
	{
		if(arr.a[i]==n)
		{
			cout<<"\nElement found at index["<<i<<"]."<<endl;
			return 1;
		}
	}
	cout<<"\nElement NOT found."<<endl;
}

void deleteAtIndex(struct Array &arr, int n)
{
	if(n>=0 && n<arr.length)
	{
	  for(int i=n; i<arr.length; i++)
	  {
		arr.a[i]=arr.a[i+1];
      }
	  arr.length--;
	  cout<<"\nElement deleted Successfully."<<endl;
	  cout<<"\nUpdated Array."<<endl;
	  display(arr);
    }
    else
    {
    	cout<<"\nInvalid Index."<<endl;
	}
}

void get(struct Array &arr, int index)
{
	if(index>=0 && index<arr.length)
	 cout<<"\nElement at Index["<<index<<"] = "<<arr.a[index]<<endl;
	else
	 cout<<"\nInvalid Index"<<endl;
}

void replace(struct Array &arr, int index, int n)
{
	if(index>=0 && index<arr.length)
	{
		arr.a[index]=n;
		cout<<"\nElement Replaced Successfully"<<endl;
	}
	else
	  cout<<"\nInvalid Index"<<endl;
}

void max(struct Array &arr)
{
	int max=arr.a[0];
	for(int i=1; i<arr.length; i++)
	{
		if(arr.a[i]>max)
		  max=arr.a[i];
	}
	cout<<"\nGreatest Element in the Array is "<<max<<endl;
}

void min(struct Array &arr)
{
	int min=arr.a[0];
	for(int i=1; i<arr.length; i++)
	{
		if(arr.a[i]<min)
		  min=arr.a[i];
	}
	cout<<"\nLeast Element in the Array is "<<min<<endl;
}

int sum(struct Array &arr)
{
	int sum=0;
	for(int i=0; i<arr.length; i++)
	  sum+=arr.a[i];
	cout<<"\nSummation of all the Elements is "<<sum<<endl;
	return sum;
}

void reverse(struct Array &arr)
{
	int j=arr.length-1;
	int temp;
	for(int i=0; i<j; i++)
	{
		temp=arr.a[i];
		arr.a[i]=arr.a[j];
		arr.a[j]=temp;
		j--;
	}
}

int main()
{
    struct Array arr;
    cout<<"\nEnter the length Array: ";
    cin>>arr.size;
    cout<<"\nHow many elements want to insert: ";
    cin>>arr.length;
    for(int i=0; i<arr.length; i++)
    { 
       cout<<"\nEnter element at index["<<i<<"]=";
       cin>>arr.a[i];
    }
    cout<<"\nArray Created and elements inserted Successfully!!"<<endl;
    int n, index, ch;
    while(1)
	{
      cout<<"\n1. Display Array"<<endl;
      cout<<"2. Append Element"<<endl;
      cout<<"3. Insert Element"<<endl;
      cout<<"4. Delete Element"<<endl;
      cout<<"5. Search Element"<<endl;
      cout<<"6. Delete Element at Index"<<endl;
      cout<<"7. Get Element at Index"<<endl;
      cout<<"8. Replace Element at Index"<<endl;
      cout<<"9. Maximum Element"<<endl;
      cout<<"10. Minimum Element"<<endl;
      cout<<"11. Sum of all the Elements"<<endl;
      cout<<"12. Average"<<endl;
      cout<<"13. Reverse the Array"<<endl;
      cout<<"14. Exit"<<endl;
      cout<<"\n\nEnter Choice: ";
      cin>>ch;
       switch(ch)
       {
    	 case 1:
    	 {
            display(arr);
            break;
         }
         case 2:
         {
           display(arr);
           cout<<"\nEnter the element to append: ";
           cin>>n;
           append(arr,n);
           display(arr);
           break;
         }
         case 3:
         {
            display(arr);
     	    cout<<"\nEnter the element to be inserted: ";
	        cin>>n;
	        cout<<"\nInsert at what index?: ";
	        cin>>index;
	        insert(arr,n,index);
	        cout<<"\nInsertion Successful"<<endl;
	        cout<<"\nUpdated Array"<<endl;
	        display(arr);
	        break;
	     }
	     case 4:
	   	 {
	   	 	display(arr);
	   		cout<<"\nEnter the element to delete: ";
	   		cin>>n;
	   		deletion(arr,n);
	   		display(arr);
	   		break;
		 }
	     case 5:
	   	 {
	   		display(arr);
	   		cout<<"\nEnter the element to search: ";
	   		cin>>n;
	   		search(arr,n);
	   		break;
		 }
		 case 6:
		 {
		 	display(arr);
		 	cout<<"\nEnter the Index to delete: ";
		 	cin>>index;
		 	deleteAtIndex(arr,index);
		 	break;
		 }
		 case 7:
		 	{
		 	 display(arr);
		 	 cout<<"\nEnter the Index to get the Element: ";
		 	 cin>>index;
		 	 get(arr,index);
		 	 break;
			}
		case 8:
			{
				display(arr);
				cout<<"\nEnter the Index to Replace: ";
				cin>>index;
				cout<<"\nEnter the Element to update: ";
				cin>>n;
				replace(arr,index,n);
				break;
			}
		 case 9:
		 	{
		 		display(arr);
		 		max(arr);
		 		break;
			}
		 case 10:
		 	{
		 		display(arr);
		 		min(arr);
		 		break;
			}
		 case 11:
		 	{
		 		display(arr);
		 		sum(arr);
		 		break;
			}
		 case 12:
		 	{
		 		display(arr);
		 		cout<<"\nAverage = "<<(float)sum(arr)/(arr.length)<<endl;
		 		break;
			}
		 case 13:
		 	{
		 		display(arr);
		 		reverse(arr);
		 		cout<<"\nArray is Reversed Successfully"<<endl;
		 		display(arr);
		 		break;
			}
		 case 14:
		   {
		 	cout<<"\nProgram Terminated Successfully."<<endl;
		 	exit(0);
		   }
        }
    }
    
	return 0;
}
