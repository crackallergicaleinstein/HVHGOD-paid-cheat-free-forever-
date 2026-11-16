// FUN_180440490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180440490 */

undefined8 FUN_180440490(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  uVar5 = 0xd;
  lVar3 = *param_1;
  lVar1 = lVar3 + uVar2;
  if (uVar2 < 0x13) {
LAB_1804404f1:
    if (0x11 < uVar2) goto LAB_1804404f7;
LAB_180440553:
    if (8 < uVar2) goto LAB_180440559;
LAB_1804405b5:
    if (10 < uVar2) goto LAB_1804405bb;
LAB_180440613:
    if (9 < uVar2) goto LAB_180440619;
    if (8 < uVar2) goto LAB_18044064b;
LAB_1804406ad:
    if (9 < uVar2) goto LAB_1804406b3;
    if (7 < uVar2) goto LAB_1804406e9;
LAB_180440783:
    if (uVar2 < 0xc) goto LAB_1804407b5;
LAB_180440789:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"hud_velocity",0xc);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0x16;
    }
LAB_1804407bb:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"misc_sounds",0xb);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0x22;
    }
    if (uVar2 < 0xc) goto LAB_18044081d;
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"misc_effects",0xc);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 5;
    }
LAB_180440827:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"misc_death",10);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 5;
    }
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"misc_shots",10);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0x17;
    }
    if (((0xb < uVar2) &&
        (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"misc_loadout",0xc), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 0x23;
    }
    if (((0xe < uVar2) &&
        (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"misc_scoreboard",0xf), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 0x19;
    }
    if (((0x10 < uVar2) &&
        (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"view_local_player",0x11), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 0x18;
    }
    if ((uVar2 < 0x13) ||
       (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"view_world_removals",0x13), lVar4 == lVar1))
    goto LAB_180440952;
    if (lVar4 - lVar3 != -1) {
      return 0x14;
    }
LAB_18044095b:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"view_fov",8);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0x13;
    }
  }
  else {
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"grenades_visibility",0x13);
    if (lVar4 != lVar1) {
      if (lVar4 - lVar3 != -1) {
        return 0x24;
      }
      goto LAB_1804404f1;
    }
LAB_1804404f7:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"grenades_indicator",0x12);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0x13;
    }
    if (uVar2 < 0x15) goto LAB_180440553;
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"grenades_trajectories",0x15);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0x1e;
    }
LAB_180440559:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world_sky",9);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 2;
    }
    if (uVar2 < 0xe) goto LAB_1804405b5;
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world_lighting",0xe);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 10;
    }
LAB_1804405bb:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world_focus",0xb);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0xf;
    }
    if (uVar2 < 0xd) goto LAB_180440613;
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world_weather",0xd);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 7;
    }
LAB_180440619:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world_wind",10);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0x15;
    }
LAB_18044064b:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world_fog",9);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 2;
    }
    if (uVar2 < 0xe) goto LAB_1804406ad;
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world_surfaces",0xe);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 9;
    }
LAB_1804406b3:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world_item",10);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0xb;
    }
LAB_1804406e9:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"hud_bomb",8);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0xb;
    }
    if (0xb < uVar2) {
      lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"hud_keybinds",0xc);
      if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
        return 0x10;
      }
      if (uVar2 < 0xe) goto LAB_180440783;
      lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"hud_spectators",0xe);
      if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
        return 0x1f;
      }
      goto LAB_180440789;
    }
LAB_1804407b5:
    if (10 < uVar2) goto LAB_1804407bb;
LAB_18044081d:
    if (9 < uVar2) goto LAB_180440827;
LAB_180440952:
    if (7 < uVar2) goto LAB_18044095b;
  }
  if (0xb < uVar2) {
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"view_offsets",0xc);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0x1e;
    }
    if (((0xb < uVar2) &&
        (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"view_display",0xc), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 0x1d;
    }
  }
  if ((uVar2 < 0xb) || (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"view_camera",0xb), lVar4 == lVar1))
  {
    if (9 < uVar2) goto LAB_180440a2f;
LAB_180440a5e:
    if (8 < uVar2) goto LAB_180440a67;
  }
  else {
    if (lVar4 - lVar3 != -1) {
      return 0xf;
    }
LAB_180440a2f:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"projectile",10);
    if (lVar4 == lVar1) goto LAB_180440a5e;
    if (lVar4 - lVar3 != -1) {
      return 0x15;
    }
LAB_180440a67:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"esp_items",9);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0xb;
    }
  }
  if (((6 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"lagcomp",7), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 9;
  }
  if (((8 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"indicator",9), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 0x16;
  }
  if ((uVar2 < 0x11) ||
     (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"current_character",0x11), lVar4 == lVar1)) {
    if (8 < uVar2) goto LAB_180440b35;
LAB_180440b64:
    if (6 < uVar2) goto LAB_180440b6d;
  }
  else {
    if (lVar4 - lVar3 != -1) {
      return 0x12;
    }
LAB_180440b35:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"viewmodel",9);
    if (lVar4 == lVar1) goto LAB_180440b64;
    if (lVar4 - lVar3 != -1) {
      return 1;
    }
LAB_180440b6d:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"weather",7);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 7;
    }
  }
  if (((4 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"scene",5), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 10;
  }
  if (((0xb < uVar2) &&
      (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"movement_air",0xc), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 0x15;
  }
  if ((uVar2 < 0xf) ||
     (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"movement_ground",0xf), lVar4 == lVar1)) {
    if (7 < uVar2) goto LAB_180440c43;
  }
  else {
    if (lVar4 - lVar3 != -1) {
      return 0xc;
    }
LAB_180440c43:
    lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"movement",8);
    if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
      return 0xc;
    }
  }
  if (((6 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"surface",7), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 9;
  }
  if (((0xd < uVar2) &&
      (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"ragebot_aimbot",0xe), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 1;
  }
  if ((uVar2 < 0x11) ||
     (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"ragebot_selection",0x11), lVar4 == lVar1)) {
    if (uVar2 < 3) goto LAB_180440d37;
  }
  else if (lVar4 - lVar3 != -1) {
    return 0x16;
  }
  lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,&DAT_18081ecb4,3);
  if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
    return 0;
  }
LAB_180440d37:
  if (((6 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"antiaim",7), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 0;
  }
  if (((4 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"legit",5), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 0x13;
  }
  if (((5 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"impact",6), lVar4 != lVar1)) &&
     (lVar4 - lVar3 != -1)) {
    return 0x17;
  }
  if (((uVar2 < 5) || (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"other",5), lVar4 == lVar1)) ||
     (lVar4 - lVar3 == -1)) {
    if (((5 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"visual",6), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 5;
    }
    if (((6 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"removal",7), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 9;
    }
    if (((5 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"camera",6), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 0xf;
    }
    if (((2 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,&DAT_18081ed18,3), lVar4 != lVar1))
       && (lVar4 - lVar3 != -1)) {
      return 0x16;
    }
    if (((4 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"enemy",5), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 0x12;
    }
    if (5 < uVar2) {
      lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"player",6);
      if ((lVar4 != lVar1) && (lVar4 - lVar3 != -1)) {
        return 0x12;
      }
      if (((5 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"weapon",6), lVar4 != lVar1)) &&
         (lVar4 - lVar3 != -1)) {
        return 1;
      }
    }
    if (((4 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"world",5), lVar4 != lVar1)) &&
       (lVar4 - lVar3 != -1)) {
      return 0x14;
    }
    if (((3 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,&DAT_18081ecf0,4), lVar4 != lVar1))
       && (lVar4 - lVar3 != -1)) {
      return 3;
    }
    if (((5 < uVar2) && (lVar4 = thunk_FUN_1805f9970(lVar3,lVar1,"config",6), lVar4 != lVar1)) &&
       (uVar5 = 0xd, lVar4 - lVar3 != -1)) {
      uVar5 = 6;
    }
  }
  return uVar5;
}



