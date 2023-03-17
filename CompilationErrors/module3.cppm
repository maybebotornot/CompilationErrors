export module module3;
import <type_traits>;

namespace module3_namespace
{
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
