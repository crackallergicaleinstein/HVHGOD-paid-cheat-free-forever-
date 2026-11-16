// FUN_180352db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180352db0 */

char * FUN_180352db0(undefined1 param_1)

{
  switch(param_1) {
  case 0:
    return "not_run";
  case 1:
    return "ready";
  case 2:
    return "input_owned";
  case 3:
    return "unreadable";
  case 4:
    return "disabled";
  case 5:
    return "movement_blocked";
  case 6:
    return "jump_released";
  case 7:
    return "duck_held";
  case 8:
    return "grounded";
  case 9:
    return "invalid_motion";
  case 10:
    return "trace_unavailable";
  case 0xb:
    return "start_solid";
  case 0xc:
    return "all_solid";
  case 0xd:
    return "no_hit";
  case 0xe:
    return "invalid_hit";
  case 0xf:
    return "steep_plane";
  case 0x10:
    return "not_approaching";
  case 0x11:
    return "contact_outside_horizon";
  case 0x12:
    return "no_contact";
  case 0x13:
    return "not_falling";
  case 0x14:
    return "already_attempted";
  case 0x15:
    return "duck_not_ready";
  case 0x16:
    return "invalid_penalty";
  case 0x17:
    return "outside_window";
  case 0x18:
    return "stand_after_contact";
  case 0x19:
    return "duck_too_late";
  case 0x1a:
    return "stand_clearance";
  case 0x1b:
    return "jump_after_command";
  case 0x1c:
    return "across_clearance";
  case 0x1d:
    return "no_room";
  case 0x1e:
    return "invalid_native_time";
  case 0x1f:
    return "command_rewound";
  case 0x20:
    return "native_trial_rejected";
  default:
    return "unknown";
  }
}



