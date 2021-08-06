#include <iostream>
#include <string>
using namespace std;
//Tìm nghiệm của đa thức ax + b
int timnghiemdathuc(int a, int b);
float x;
int main()
{
  float a, b;
  float x;
  cout << "Đây là chương trình tìm nghiệm của đa thức ax + b (với biến x) " << endl;
  cout << "Mời bạn nhập giá trị thích hợp của a (a là một số nguyên): ";
  cin >> a;
  cout << '\n' << "Mời bạn nhập giá trị thích hợp của b (b là một số nguyên): ";
  cin >> b;
  if(a != 0) 
  {
    if (b != 0) 
    {
      cout << "Vậy, nghiệm của đa thức ax + b (với biến x) là: " << ((0 - b)/a) << endl; //TH 1: bình thường
    }
    else if (b == 0)
    {
      cout << "Vậy, nghiệm của đa thức ax + b (với biến x) là 0"; /*TH2: a khác 0, b = 0, khi đó ax = 0, a khác 0 nên x = 0 */
    }
  }
  else if (a == 0) 
  {
    string case3and4 = b == 0 ? "Vậy, đa thức ax + b với các giá trị a, b nhận được có vô số nghiệm. " : "Vậy, đa thức ax + b với các giá trị a, b nhận được vô nghiệm."; /*TH3: Khi a, b đều bằng 0, khi đó ax = 0, mà a = 0 => x có thể bằng bất cứ số nào. TH4: Khi a = 0, mà b khác 0, => ax khác 0. Mà a = 0 nên ax bắt buộc = 0 (vô lý) */
    cout << case3and4 << endl;
  }
  else 
  {
    cout << "Xin lỗi, chúng tôi không thể tìm được nghiệm của đa thức với các giá trị a, b được nhập vào.";
  }
  cout << '\n' << "Xin chân thành cảm ơn bạn vì đã ủng hộ chương trình của chúng tôi.";
  return 0;

}
