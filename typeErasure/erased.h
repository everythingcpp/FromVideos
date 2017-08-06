#pragma once
#include <memory>

struct TypeErased
{
	template<typename T>
	TypeErased(T&& value) { *this = value; }

	template<typename T>
	TypeErased& operator=(T&& value)
	{ m_value.reset(new Model<T>(value)); }

	void printName() const
	{ m_value->printName(); }

private:
	struct Concept {
		virtual ~Concept() {}
		virtual void printName() const = 0;
	};
	template<typename T>
	struct Model : Concept {
		Model(T const& value) : m_val(value) {}

		void printName() const override
		{ m_val.printName(); }

		T m_val;
	};

private:
	std::unique_ptr<Concept> m_value;
};

