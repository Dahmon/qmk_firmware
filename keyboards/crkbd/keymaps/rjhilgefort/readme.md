# [🐦 @rjhilgefort](https://twitter.com/rjhilgefort)'s Corne KBD (CRKBD) Layout

My Corne KBD layout is inspired by [my Planck Layout](../../../planck/keymaps/rjhilgefort/readme.md), but with some additional features. Namely, this layout has Linux support.

![](https://imgur.com/wp9ksTIh.jpg)
![](https://imgur.com/fnyiCnEh.jpg)

## Features

Here's some highlights/features of the layout.

-   Ergonomic symbols layer.
-   Media and Numpad layer.
-   Planck-like extra tri-layer when holding the other two layers.
-   Supports Mac and Linux as 1st class citizens giving each a dedicated base layer and a media layer for each that matches media keys for each OS. The Linux default layer focuses on `Ctrl` instead of `Super` and vice versa for Mac. (When you set Linux as your base layer, the Linux media layer is what you shift into. Same for the Mac layer when that's the base)

## Layers

#### Keymap 0: Base (Mac)

```
  ,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    CTL_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(3), ALT_ESC, KC_LGUI,     KC_SPC,   MO(2),   HYPER
                                    //`--------------------------'  `--------------------------'
```

#### Keymap 1: Base (Linux)

```
  ,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    ALT_ESC,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ENT,
  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(4), GUI_ESC, KC_LCTL,     KC_SPC,   MO(2),   HYPER
                                    //`--------------------------'  `--------------------------'
```

#### Keymap 2: Symbol Layer

```
  ,-----------------------------------------------------.                    ,-----------------------------------------------------.
    _______, KC_BSLS, KC_SLSH, KC_LBRC, KC_RBRC, KC_TILD,                      KC_PIPE,  KC_EQL, KC_PLUS, KC_MINS, KC_UNDS, _______,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, KC_LCBR, KC_RCBR, KC_LPRN, KC_RPRN,  KC_GRV,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, _______, _______,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          MO(5), _______, _______,    _______, KC_TRNS, _______
                                    //`--------------------------'  `--------------------------'
```

#### Keymap 3: Media & Numbers (MAC)

```
  ,-----------------------------------------------------.                    ,-----------------------------------------------------.
    _______, _______, KC_BRMD, KC_VOLU, KC_BRMU, _______,                      _______,    KC_7,    KC_8,    KC_9, KC_ASTR, _______,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, KC_MUTE, KC_MRWD, KC_MPLY, KC_MFFD, _______,                      _______,    KC_4,    KC_5,    KC_6, KC_PLUS, _______,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, _______, _______, KC_VOLD, _______, _______,                      _______,    KC_1,    KC_2,    KC_3, KC_BSLS, _______,
  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TRNS, _______, _______,       KC_0,   MO(5), _______
                                    //`--------------------------'  `--------------------------'
```

#### Keymap 4: Media & Numbers (Linux)

```
  ,-----------------------------------------------------.                    ,-----------------------------------------------------.
    _______, _______, KC_BRID, KC_VOLU, KC_BRIU, _______,                      _______,    KC_7,    KC_8,    KC_9, KC_ASTR, _______,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, KC_MUTE, KC_MPRV, KC_MPLY, KC_MNXT, _______,                      _______,    KC_4,    KC_5,    KC_6, KC_PLUS, _______,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, _______, _______, KC_VOLD, _______, _______,                      _______,    KC_1,    KC_2,    KC_3, KC_BSLS, _______,
  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TRNS, _______, _______,       KC_0,   MO(5), _______
                                    //`--------------------------'  `--------------------------'
```

#### Keymap 5: Extra

```
  ,-----------------------------------------------------.                    ,-----------------------------------------------------.
    _______,   DF(0),   DF(1), _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, _______, _______, _______, _______, _______,                      KC_HOME, KC_PGDN, KC_PGUP,  KC_END, _______, _______,
  |--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______, _______,
  |--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TRNS, _______, _______,    _______, KC_TRNS, _______
                                    //`--------------------------'  `--------------------------'
```

## Building And Flashing

Note, you'll see that most `crkbd`'s recommend a target of `avrdude` because most kits come with a Pro Micro. I put a Elite-C on mine and thus the target is `dfu`. You can see this in the [rules.mk](./rules.mk) as the `BOOTLOADER` configuration.

#### CLI

```
make crkbd:rjhilgefort:flash
```

#### Docker

```
util/docker_build.sh crkbd:rjhilgefort:flash
```