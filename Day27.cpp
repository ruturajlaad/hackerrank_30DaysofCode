class TestDataEmptyArray{
  public:
    static vector<int> get_array(){
        return {};
    }  
};
class TestDataUniqueValues{
      public:
    static vector<int> get_array(){
        return {3,1,2};
    }
    static int get_expected_result(){
        return 1;
    }
};

class TestDataExactlyTwoDifferentMinimums{
      public:
    static vector<int> get_array(){
        return {1,3,1};
    }
        static int get_expected_result(){
        return 0;
    }
};
