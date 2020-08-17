//Distribute Candies to People

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        int i=0;
        int j=1;
        int cand=candies;
        vector<int> result;
        for (int k = 1; k <= num_people; k++) 
        result.push_back(0); 
        while(cand>0)
        {
            
            // i=i%num_people;
            if(i>num_people-1){
                i=0;
            }
            if(j<cand){
                result[i]+=j;
                cand-=j;
            }
            else{
                result[i]+=cand;
                cand=0;
                
            }
            
            
            cout<<"i: "<< i<<" j: "<<j<<" candies:"<<cand<<"\n";
            j++;
            i++;
            
        }
        // cout<<"i: "<< i<<" j: "<<j<<" candies:"<<cand<<"\n" ;
        return result;
    }
};
