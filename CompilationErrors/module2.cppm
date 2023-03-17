export module module2;
import module1;

// using namespace module1_namespace::literals; // fixes the first compilation error

namespace module2_namespace
{
	export size_t fun()
	{
		module1_namespace::A c = {};
		return c.m_a;
	}
}
