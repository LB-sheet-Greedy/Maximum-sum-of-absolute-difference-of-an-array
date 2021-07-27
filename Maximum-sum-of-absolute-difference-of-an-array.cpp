/*
Way 1: Brute force

Find all possible permutations along with their sum and return the max sum of all

Way 2: GREEDY

we have to think greedily that how can we maximize the difference value of the elements so that we can have a maximum sum. 
This is possible only if we calculate the difference between some very high values and some very low values like 
(highest – smallest). This is the idea which we have to use to solve this problem. Let us see the above example, 
we will have maximum difference possible for sequence {1, 8, 2, 4} because in this sequence we will get some high 
difference values, ( |1-8| = 7, |8-2| = 6 .. ). Here, by placing 8(highest element) in place of 1 and 2 we get two high 
difference values. Similarly, for the other values, we will place next highest values in between other, as we have only one 
left i.e 4 which is placed at last.

												Algorithm: 

To get the maximum sum, we should have a sequence in which small and large elements comes alternate. This is done to get maximum difference.
For the implementation of the above algorithm -> 

1. We will sort the array. 
2. Calculate the final sequence by taking one smallest element and largest element from the sorted array and make one vector 
   array of this final sequence. 
3. Finally, calculate the sum of absolute difference between the elements of the array.
 
*/

#include<bits/stdc++.h>
#include<vector>

using namespace std;

void MaxSumDifference(int a[], int n)
{
										//step 1:
	sort(a,a+n);
	
										//step 2:
	
	//declaring 2 pointers to insert one smallest and one largest element into the output
	int start=0;
	int end=n-1;

	
	//to store output
	vector<int> v;
	v.push_back(a[0]);   // keep 1st element as it is
	
	while(start<end)
	{
		//ek larger daala
		v.push_back(a[end]);
		end--;
		//ek smaller daala
		v.push_back(a[start]);
		start++;
	}
	
	
	//Printing the Output of vector ‘v1’ using iterators  begin() and end() 
	cout<<"\n { "; 
    for(int i=0; i < v.size(); i++)
    {
    	cout << v.at(i) <<" ";
	}
	cout<<" } "; 
}

int main()
{
    int a[] = { 1, 2, 4, 8 };
    int n = sizeof(a) / sizeof(a[0]);
 
    MaxSumDifference(a, n);
}
