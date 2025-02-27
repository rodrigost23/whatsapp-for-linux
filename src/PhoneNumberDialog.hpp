#pragma once

#include <gtkmm/builder.h>
#include <gtkmm/dialog.h>
#include <gtkmm/button.h>
#include <gtkmm/entry.h>

class PhoneNumberDialog
    : public Gtk::Dialog
{
    public:
        PhoneNumberDialog(BaseObjectType* cobject, Glib::RefPtr<Gtk::Builder> const& refBuilder);

    public:
        Glib::ustring getPhoneNumber();

    private:
        void onShow();
        void onTextChange();

    private:
        Gtk::Button* m_okButton;
        Gtk::Entry*  m_phoneNumberEntry;
};
