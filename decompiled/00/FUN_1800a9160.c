// FUN_1800a9160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800a9160 */

undefined8 FUN_1800a9160(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = param_1[1];
  uVar1 = *param_1;
  uVar4 = 0xd;
  lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Performance]",0xd);
  if (lVar2 == -1) {
    lVar2 = FUN_180159df0(uVar1,uVar3,0,"[AntiAim]",9);
    if (lVar2 == -1) {
      lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Rage]",6);
      if (lVar2 == -1) {
        lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Legit]",7);
        if (lVar2 == -1) {
          lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Shot",5);
          if ((lVar2 == -1) && (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Combat]",8), lVar2 == -1)) {
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Prediction]",0xc);
            if ((lVar2 != -1) ||
               ((lVar2 = FUN_180159df0(uVar1,uVar3,0,"LOCAL_RENDER_POSITION",0x15), lVar2 != -1 ||
                (lVar2 = FUN_180159df0(uVar1,uVar3,0,"PREDICTION_",0xb), lVar2 != -1)))) {
              return 0xc;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Movement]",10);
            if (lVar2 != -1) {
              return 0xb;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Inventory]",0xb);
            if (lVar2 != -1) {
              return 0xe;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[SkinChanger]",0xd);
            if (lVar2 != -1) {
              return 0xf;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Config]",8);
            if (lVar2 != -1) {
              return 0x12;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,&DAT_1806bbd1c,4);
            if ((lVar2 != -1) || (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Input]",7), lVar2 != -1)) {
              return 0x13;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[World]",7);
            if ((lVar2 != -1) ||
               ((lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Scene]",7), lVar2 != -1 ||
                (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Weather]",9), lVar2 != -1)))) {
              return 0x10;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[ProfileChanger]",0x10);
            if ((lVar2 != -1) ||
               ((((lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Misc]",6), lVar2 != -1 ||
                  (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Camera]",8), lVar2 != -1)) ||
                 (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[HUD]",5), lVar2 != -1)) ||
                (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Impacts]",9), lVar2 != -1)))) {
              return 0x14;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Authentication]",0x10);
            if (((lVar2 != -1) || (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[UserAPI]",9), lVar2 != -1))
               || ((lVar2 = FUN_180159df0(uVar1,uVar3,0,"[OFFSETS]",9), lVar2 != -1 ||
                   ((lVar2 = FUN_180159df0(uVar1,uVar3,0,"[OFFSET ",8), lVar2 != -1 ||
                    (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Sync]",6), lVar2 != -1)))))) {
              return 0x11;
            }
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"[PlayerESP]",0xb);
            if ((lVar2 == -1) &&
               ((lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Chams]",7), lVar2 == -1 &&
                (lVar2 = FUN_180159df0(uVar1,uVar3,0,"[Materials]",0xb), lVar2 == -1)))) {
              uVar4 = 0;
            }
            return uVar4;
          }
          uVar3 = 10;
        }
        else {
          uVar3 = 9;
        }
      }
      else {
        uVar3 = 8;
      }
    }
    else {
      uVar3 = 7;
    }
  }
  else {
    lVar2 = FUN_180159df0(uVar1,uVar3,0,"FRAME_GUNS_",0xb);
    if ((((lVar2 == -1) && (lVar2 = FUN_180159df0(uVar1,uVar3,0,"FRAME_KNIVES_",0xd), lVar2 == -1))
        && (lVar2 = FUN_180159df0(uVar1,uVar3,0,"FRAME_AGENTS_",0xd), lVar2 == -1)) &&
       ((lVar2 = FUN_180159df0(uVar1,uVar3,0,"FRAME_GLOVES_",0xd), lVar2 == -1 &&
        (lVar2 = FUN_180159df0(uVar1,uVar3,0,"FRAME_INVENTORY_",0x10), lVar2 == -1)))) {
      lVar2 = FUN_180159df0(uVar1,uVar3,0,"RENDER_",7);
      if (lVar2 == -1) {
        uVar4 = 6;
        lVar2 = FUN_180159df0(uVar1,uVar3,0,"CHAMS_",6);
        if ((((lVar2 == -1) && (lVar2 = FUN_180159df0(uVar1,uVar3,0,"PRIMITIVES_",0xb), lVar2 == -1)
             ) && ((lVar2 = FUN_180159df0(uVar1,uVar3,0,"OVERLAY_",8), lVar2 == -1 &&
                   (((lVar2 = FUN_180159df0(uVar1,uVar3,0,"POSTPROCESS_",0xc), lVar2 == -1 &&
                     (lVar2 = FUN_180159df0(uVar1,uVar3,0,"DLIGHT_",7), lVar2 == -1)) &&
                    (lVar2 = FUN_180159df0(uVar1,uVar3,0,"PREVIEW_",8), lVar2 == -1)))))) &&
           ((lVar2 = FUN_180159df0(uVar1,uVar3,0,"MENU_CPU_",9), lVar2 == -1 &&
            (lVar2 = FUN_180159df0(uVar1,uVar3,0,"WIDGETS_",8), lVar2 == -1)))) {
          lVar2 = FUN_180159df0(uVar1,uVar3,0,"COMMAND_RAGE_",0xd);
          if ((lVar2 != -1) ||
             (((lVar2 = FUN_180159df0(uVar1,uVar3,0,"COMMAND_LEGIT_",0xe), lVar2 != -1 ||
               (lVar2 = FUN_180159df0(uVar1,uVar3,0,"COMMAND_PIPELINE_",0x11), lVar2 != -1)) ||
              (lVar2 = FUN_180159df0(uVar1,uVar3,0,"COMMAND_TOTAL_",0xe), lVar2 != -1)))) {
            return 5;
          }
          lVar2 = FUN_180159df0(uVar1,uVar3,0,"COMMAND_",8);
          if ((lVar2 != -1) || (lVar2 = FUN_180159df0(uVar1,uVar3,0,"MOVEMENT_",9), lVar2 != -1)) {
            return 4;
          }
          lVar2 = FUN_180159df0(uVar1,uVar3,0,"SYNC_",5);
          if ((lVar2 == -1) &&
             (lVar2 = FUN_180159df0(uVar1,uVar3,0,"LOADER_BRIDGE_",0xe), lVar2 == -1)) {
            lVar2 = FUN_180159df0(uVar1,uVar3,0,"PROFILE_",8);
            uVar4 = 6;
            if (lVar2 == -1) {
              uVar4 = 1;
            }
          }
          return uVar4;
        }
      }
      return 3;
    }
    uVar3 = 2;
  }
  return uVar3;
}



