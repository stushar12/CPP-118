vector<pair<int,int>> overlappedInterval(vector<pair<int,int>> vec, int n) 
{
vector<pair<int,int>> merge;
if(vec.size()==0)
{
return merge;
}
sort(vec.begin(),vec.end());
pair<int,int> p=vec[0];
for(auto it:vec)
{
if(p.second>=it.first)
{
p.second=max(p.second,it.second);
}
else
{
merge.push_back(p);
p=it;
}
}
merge.push_back(p);
return merge;

    
}