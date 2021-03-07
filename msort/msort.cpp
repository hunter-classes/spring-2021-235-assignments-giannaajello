//Merge by: Shanie Ho
std::vector <int> merge(std::vector <int> a , std::vector<int> b){
    std::vector <int> merged;
    int tot = a.size() + b.size();
    int index = 0;
    int aIndex = 0;
    int bIndex = 0;
    while (index < tot){
        if (aIndex < a.size() && bIndex< b.size()){
            if (a.at(aIndex) < b.at(bIndex)){
                merged.push_back(a.at(aIndex));
                aIndex++;
                index ++;
            }
            else{
                merged.push_back(b.at(bIndex));
                bIndex++;
                index ++;
            }
        }
        else if (bIndex < b.size()){
            merged.push_back(b.at(bIndex));
            bIndex++;
            index ++;
        }
        else{
            merged.push_back(a.at(aIndex));
            aIndex++;
            index ++;
        }
    }
    return merged;
}

// Msort by: Kevin Hardyal

std::vector<int> msort(std::vector<int>& bruh){
    if (bruh.size() <= 1){ //returns the current element in the vector since it is the only one left
      return bruh;
    }
 
   std::vector<int> left, right, result;
   int middle = (bruh.size()+ 1) / 2; //getting middle from the vector size
 
   for (int i = 0; i < middle; i++){
      left.push_back(bruh[i]);
   }
   for (int i = middle; i < bruh.size(); i++){
      right.push_back(bruh[i]);
   }
 
   msort(left); // sort both sides (left and right)
   msort(right);
   bruh = merge(left,right); //goes on to be merged
   return bruh; //then returned
}
