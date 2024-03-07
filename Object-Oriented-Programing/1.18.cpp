class ArrayOfCalculator {
    public:
        static int maxOfArray(int arr[], int n){
            int res = arr[0];
            for(int i = 1; i<n; i++){
                if(res < arr[i]){
                    res = arr[i];
                }
            }
            return res;
        }
        static double maxOfArray(double arr[], int n){
            double res = arr[0];
            for(int i = 1; i<n; i++){
                if(res < arr[i]){
                    res = arr[i];
                }
            }
            return res;
        }
        static int minOfArray(int arr[], int n){
            int res = arr[0];
            for(int i = 1; i<n; i++){
                if(res > arr[i]){
                    res = arr[i];
                }
            }
            return res;
        }
        static double minOfArray(double arr[], int n){
            double res = arr[0];
            for(int i = 1; i<n; i++){
                if(res > arr[i]){
                    res = arr[i];
                }
            }
            return res;
        }
};