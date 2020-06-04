int makeArrayConsecutive2(std::vector<int> statues) {
    const auto [min, max] = std::minmax_element(statues.begin(),statues.end());
   return (*max-*min+1)-statues.size() ;
}
