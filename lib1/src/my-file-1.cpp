namespace lib1 {

class Storage {
 public:
  int get_value() { return value_; }

  void set_value(int new_value) { value_ = new_value; }

 private:
  int value_;

  void big_method() {  // Exceeds nesting threshold and cognitive complexity
    int tmp_value = 2;
    int sum = 0;
    // Exceeds nesting threshold and cognitive complexity

    for (int i = 0; i < 100; i++) {
      if (i % 2 == 0) {
        for (int j = 0; j < 50; j++) {
          if (j % 3 == 0) {
            for (int k = 0; k < 25; k++) {
              if (k % 4 == 0) {
                while (sum < 1000) {
                  sum += i * j * k;
                  if (sum > 500) {
                    for (int m = 0; m < 10; m++) {
                      sum -= m;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    // Adding more lines to exceed line threshold
    int result = 0;
    result += sum;
    result *= 2;
    result /= 3;
    result += 100;
    result -= 50;
    result *= 4;
    result /= 2;
    result += 200;
    result -= 75;
    result *= 3;
    result /= 4;
    result += 300;
    result -= 100;
    result *= 5;
    result /= 6;
    result += 400;
    result -= 125;
    result *= 6;
    result /= 7;
    result += 500;
    result -= 150;
    result *= 7;
    result /= 8;
    result += 600;

    value_ = result;
  }
};

}  // namespace lib1