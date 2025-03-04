// c23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;


class Singleton
{
private:
	static Singleton* instance;
	int x;
	Singleton(int x)
	{
		this->x = x;
	}
public:
	Singleton(Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	Singleton(Singleton&&) = delete;
	Singleton& operator=(const Singleton&&) = delete;

	static Singleton* getInstance(int x = 33)
	{
		if (instance == nullptr)
		{
			instance = new Singleton(x);
		}
		return instance;
	}

	void afisare() const
	{
		std::cout << "x= " << x;
	}
};

Singleton* Singleton::inst
Attila Bodis
19:56
class Singleton
{
private:
	static Singleton* instance;
	int x;
	Singleton(int x)
	{
		this->x = x;
	}
public:
	~Singleton()
	{
		delete instance;
		instance = nullptr;
	}
	Singleton(Singleton&) = delete;
	Singleton& operator=(const Singleton&) = delete;

	Singleton(Singleton&&) = delete;
	Singleton& operator=(const Singleton&&) = delete;

	static Singleton* getInstance(int x = 33)
	{
		if (instance == nullptr)
		{
			instance = new Singleton(x);
		}
		return instance;
	}

	void afisare() const
	{
		Gabriel Tirziu
			20:21
			eu trebuie plec, la revedere
			sa plec* : ))
			Attila Bodis
			20:38
#include <iostream>
#include <map>
			using namespace std;
		enum class state
		{
			off = 100,
			on,
			restarted
		};

		//interfata observer
		class Observer
		{
		public:
			virtual void notify(state s) = 0;
			virtual void afisare_stare() = 0;
		};

		// interfata subject
		class Subject
		{
		public:
			virtual void registerObs(int id, Observer* obs) = 0;
			virtual void unregisterObs(int id) = 0;
			virtual void notify() = 0;
			virtual void afisare_stare() = 0;
			virtual void change_state(state s) = 0;
		};
		// clasa ConcreteSubject
		class ConcreteSubject : public Subject
		{
		public:
			ConcreteSubject()
			{
				s = state::off;
			}
			void registerObs(int id, Observer* obs)
			{
				observers[id] = obs;
			}

			void unregisterObs(int id)
			{
				observers.erase(id);
			}

			void change_state(state st)
			{
				s = st;
				notify();
			}

			void notify()
			{
				for (const auto& el : observers)
				{
					el.second->notify(s);
				}
			}

			void afisare_stare()
			{
				switch (s)
				{
				case state::off:
					cout << "OFF" << endl;
					break;
					case s
						//clasa ConcreteObserver
						class ConcreteObserver : public Observer
					{
					public:
						ConcreteObserver()
						{
							obs_state = state::off;
						}
						void notify(state s)
						{
							cout << "State was modified from " << (int)obs_state << " to " << (int)s << endl;
							obs_state = s;
							//m.suna112();
						}

						void afisare_stare()
						{
							switch (obs_state)
							{
							case state::off:
								cout << "OFF" << endl;
								break;
							case state::on:
								cout << "ON" << endl;
								break;
							default:
								cout << "RESTART" << endl;

							}
						}
					private:
						state
							int main()
						{

							Observer* o1, * o2, * o3;
							o1 = new ConcreteObserver();
							o2 = new ConcreteObserver();
							o3 = new ConcreteObserver();

							Subject* s = new ConcreteSubject();

							s->registerObs(1, o1);
							s->registerObs(2, o2);
							s->registerObs(3, o3);

							s->afisare_stare();
							s->change_state(state::on);
							s->afisare_stare();
							s->unregisterObs(2);
							s->change_state(state::restarted);
							s->afisare_stare();

							delete o1;
							delete o2;
							delete o3;
							delete s;
						}