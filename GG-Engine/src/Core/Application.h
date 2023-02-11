#pragma once

namespace GGE {

	class Application {
	public:
		void start();


	private:
		virtual void update(float dt) = 0;
		virtual void onStart() = 0;

		bool running = true;
	};

}

