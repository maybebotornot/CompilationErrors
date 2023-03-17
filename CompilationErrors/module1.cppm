export module module1;

namespace module1_namespace
{
	export namespace literals
	{
		export constexpr size_t operator ""_uz(size_t val)
		{
			return val;
		}
	}

	// fixes the error in compilation of module2
	using namespace literals;

	export struct A
	{
		size_t m_a = 0_uz;
	};
}