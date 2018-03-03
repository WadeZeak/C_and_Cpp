_declspec(dllexport) void go()
{

	int *p = (int)0x3bf7e8;
		* p = 100;
		void(*p1)() = (void(*)())0xb21113;
		p1();


}
//一个进程不能访问另一个进程的内存