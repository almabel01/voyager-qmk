// Auto-generated autocorrect data
// Generated from autocorrect_data.txt

#pragma once

bool apply_autocorrect(uint8_t backspaces, const char *str) {
    // Custom autocorrections
    if (backspaces == 3 && strcmp(str, "teh") == 0) {
        send_string_with_delay("the", 0);
        return true;
    }
    if (backspaces == 4 && strcmp(str, "taht") == 0) {
        send_string_with_delay("that", 0);
        return true;
    }
    if (backspaces == 4 && strcmp(str, "waht") == 0) {
        send_string_with_delay("what", 0);
        return true;
    }
    if (backspaces == 4 && strcmp(str, "treu") == 0) {
        send_string_with_delay("true", 0);
        return true;
    }
    if (backspaces == 5 && strcmp(str, "flase") == 0) {
        send_string_with_delay("false", 0);
        return true;
    }
    if (backspaces == 7 && strcmp(str, "recieve") == 0) {
        send_string_with_delay("receive", 0);
        return true;
    }
    if (backspaces == 8 && strcmp(str, "seperate") == 0) {
        send_string_with_delay("separate", 0);
        return true;
    }
    if (backspaces == 7 && strcmp(str, "occured") == 0) {
        send_string_with_delay("occurred", 0);
        return true;
    }
    if (backspaces == 10 && strcmp(str, "definately") == 0) {
        send_string_with_delay("definitely", 0);
        return true;
    }
    if (backspaces == 3 && strcmp(str, "adn") == 0) {
        send_string_with_delay("and", 0);
        return true;
    }
    if (backspaces == 6 && strcmp(str, ":cant:") == 0) {
        send_string_with_delay("can't", 0);
        return true;
    }
    if (backspaces == 6 && strcmp(str, ":dont:") == 0) {
        send_string_with_delay("don't", 0);
        return true;
    }
    if (backspaces == 3 && strcmp(str, "mfg") == 0) {
        // Unicode: Mit freundlichen Grüßen
        tap_code16(KC_M);
        tap_code16(KC_I);
        tap_code16(KC_T);
        tap_code16(KC_SPACE);
        tap_code16(KC_F);
        tap_code16(KC_R);
        tap_code16(KC_E);
        tap_code16(KC_U);
        tap_code16(KC_N);
        tap_code16(KC_D);
        tap_code16(KC_L);
        tap_code16(KC_I);
        tap_code16(KC_C);
        tap_code16(KC_H);
        tap_code16(KC_E);
        tap_code16(KC_N);
        tap_code16(KC_SPACE);
        tap_code16(KC_G);
        tap_code16(KC_R);
        send_unicode_string("ü");
        send_unicode_string("ß");
        tap_code16(KC_E);
        tap_code16(KC_N);
        return true;
    }
    if (backspaces == 4 && strcmp(str, ":ty:") == 0) {
        send_string_with_delay("Thank you", 0);
        return true;
    }
    if (backspaces == 5 && strcmp(str, ":thx:") == 0) {
        send_string_with_delay("Thanks", 0);
        return true;
    }
    if (backspaces == 2 && strcmp(str, "ae") == 0) {
        // Unicode: ä
        send_unicode_string("ä");
        return true;
    }
    if (backspaces == 2 && strcmp(str, "oe") == 0) {
        // Unicode: ö
        send_unicode_string("ö");
        return true;
    }
    if (backspaces == 2 && strcmp(str, "ue") == 0) {
        // Unicode: ü
        send_unicode_string("ü");
        return true;
    }
    if (backspaces == 2 && strcmp(str, "ss") == 0) {
        // Unicode: ß
        send_unicode_string("ß");
        return true;
    }
    if (backspaces == 7 && strcmp(str, ":shrug:") == 0) {
        // Unicode: 🤷
        send_unicode_string("🤷");
        return true;
    }
    if (backspaces == 7 && strcmp(str, ":check:") == 0) {
        // Unicode: ✓
        send_unicode_string("✓");
        return true;
    }
    if (backspaces == 7 && strcmp(str, ":cross:") == 0) {
        // Unicode: ✗
        send_unicode_string("✗");
        return true;
    }
    if (backspaces == 7 && strcmp(str, ":arrow:") == 0) {
        // Unicode: →
        send_unicode_string("→");
        return true;
    }
    return false;
}

