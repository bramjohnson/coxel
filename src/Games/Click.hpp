#include "Scene.hpp"

namespace game {
    class Click: public lib::Scene {
        private:
            int clicks;
        
        public:
            void OnClick();
    }
}