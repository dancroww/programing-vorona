#include "../src/list.h"
#include <cassert>

void testAddPhone() {
    List phoneList;
    Phone phone1("TestBrand", "TestModel", 100.0, 5.5);
    phoneList.addPhone(phone1);

    assert(phoneList.getPhone(0).getBrand() == "TestBrand");
    assert(phoneList.getPhone(0).getModel() == "TestModel");
    assert(phoneList.getPhone(0).getPrice() == 100.0);
    assert(phoneList.getPhone(0).getDiagonal() == 5.5);
}

int main() {
    testAddPhone();
    std::cout << "All tests passed!\n";
    return 0;
}
