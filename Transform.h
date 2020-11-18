
#include "Component.h"
#include "data_structure.h"




// ��ά�ռ�����λ��
class Transform :
    public Component
{

    public:
        Transform() {};
        ~Transform() {};
        Vector3<float> pos;
        Vector3<float> face;
        Vector3<float> scale;

};
