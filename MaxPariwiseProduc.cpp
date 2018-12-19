#include <iostream>
#include <vector>

using namespace std;
///////////////////
int MaxPairwiseProduct(vector<int> nums){

    int index1 = 0;

    for(unsigned int i = 1; i <nums.size(); i++){

        if(nums[index1] < nums[i]){
            index1 = i;
        }
    }

    int index2 = 0;

    if (index1 == 0){
        index2 = 1;
    }

    for(unsigned int i = 0; i < nums.size(); i++){

        if((nums[i] != nums[index1]) && nums[index2] < nums[i] ){
            index2 = i;
        }
    }

    return nums[index1] * nums [index2];
}

///////////////////
void printVector(vector<int> vec){

    cout<<"You have entered the vector:"<<endl;
    for(unsigned int i = 0; i < vec.size(); i++){

        cout<<vec[i]<<endl;

    }
}
///////////////////

//MAIN FUNCTION
int main(){
    int N;
    cout<<"Enter the number of elements in the Vector:"<<endl;
    cin >> N;
    vector<int> nums(N);

    for(unsigned int i = 0; i < N; i++){

        cin>>nums[i];
    }

    printVector(nums);

    cout<<"Max Pairwise Product is: "<< MaxPairwiseProduct(nums)<<endl;

    return 0;
}
