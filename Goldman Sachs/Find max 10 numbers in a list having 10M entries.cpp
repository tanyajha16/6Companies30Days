typedef long long int ll;
class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<ll> kLargest(ll arr[], ll n, ll k)
    {
       sort(arr,arr+n,greater<ll>());
       vector<ll>v;
       for(ll i=0;i<k;i++)
         v.push_back(arr[i]);
       return v;
       
    }
};
