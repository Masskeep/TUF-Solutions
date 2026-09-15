class Solution{	
	public:	
		bool uniqueBinaryTree(int a, int b){
			return !(a == b || (a==1 && b == 3) || (a== 3 && b == 1));
		}
};