export module module2;
import module1;
import <type_traits>;

// using namespace module1_namespace::literals; // fixes the first compilation error

namespace module2_namespace
{
	export size_t fun()
	{
		module1_namespace::A c = {};
		return c.m_a;
	}

	namespace details
	{
		template<typename T, typename Enable = void>
		class B {};

		template<typename T>
		class B<T, std::enable_if_t<std::is_arithmetic_v<T>>>
		{
		public:
			size_t m_b = 0;
		};
	}


	export template<typename T>
	class C
	{
	public:
		details::B<T> m_c = {};
	};
}
