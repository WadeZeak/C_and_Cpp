_declspec(dllexport) void go()
{

	int *p = (int)0x3bf7e8;
		* p = 100;
		void(*p1)() = (void(*)())0xb21113;
		p1();


}
//һ�����̲��ܷ�����һ�����̵��ڴ�