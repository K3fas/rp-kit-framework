//
// Created by kefas on 26.2.23.
//

#ifndef PICO_KIT_FRAMEWORK_BASE_HPP
#define PICO_KIT_FRAMEWORK_BASE_HPP

#include "stdint.h"
#include "VColors.hpp"

using namespace rpgui::colors;

namespace rpgui::common
{
    class Clickable;
    using EventHandler = void (*)(Clickable &sender);

    struct Bounds
    {
        int16_t x, y;
        uint16_t w, h;

        Bounds() : x(0), y(0), w(0), h(0) {}
        Bounds(int16_t x, int16_t y, uint16_t w, uint32_t h)
            : x(x), y(y), w(w), h(h) {}
    };

    class Element
    {
    private:
        inline static uint16_t _count = 0;
        uint16_t _id;
        Element *_parrent;

    public:
        Element();
        virtual ~Element();

        void SetParrent(Element *parrent) { _parrent = parrent; }

        const Element *GetParrent() const { return _parrent; }
        const uint16_t GetId() const { return _id; }
        static uint16_t GetElementCount() { return _count; }
    };

    class VisualElement : public Element
    {
    private:
        Bounds _coords;

    public:
        Color color;

    public:
        VisualElement();
        VisualElement(const Bounds &coords, const Color color) : _coords(coords), color(color) {}

        virtual ~VisualElement();

        virtual const Bounds GetBounds() const { return _coords; }

        void SetBounds(const Bounds &coords);
        virtual void Draw() const = 0;
        virtual void Draw(const Bounds &coords) const = 0;
    };

} // namespace rpgui::common

#endif // PICO_KIT_FRAMEWORK_BASE_HPP
