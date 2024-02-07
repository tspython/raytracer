#ifndef HITTABLES_H_
#define HITTABLES_H_

#include "hittable.h"

#include <memory>
#include <vector>

using std::shared_ptr;
using std::make_shared;

class hittable_list : public hittable {
    public:
        std::vector<shared_ptr<hittable>> objects;

        hittable_list() {}
        hittable_list(shared_ptr<hittable> object) {
            add(object);
        }

        void clear() {
            objects.clear();
        }

        void add(shared_ptr<hittable> object) {
            objects.push_back(object);
        }

        bool hit(const ray& r, interval ray_t, hit_record& rec) const override {
            hit_record tmp_rec;
            bool hit_anything = false;
            auto closest_so_far = ray_t.max;

            for(const auto& object : objects) {
                if(object->hit(r, interval(ray_t.min, closest_so_far), tmp_rec)) {
                    hit_anything = true;
                    closest_so_far = tmp_rec.t;
                    rec = tmp_rec;
                }
            }
            return hit_anything;
        }
};


#endif // HITTABLES_H_
