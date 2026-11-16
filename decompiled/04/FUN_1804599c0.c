// FUN_1804599c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804599c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804599c0(char param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  float local_78;
  float local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  cVar3 = '#';
  plVar1 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  lVar2 = plVar1[0x38];
  pcVar4 = "##sky_window";
  uVar8 = ~*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
  uVar7 = uVar8;
  do {
    pcVar4 = pcVar4 + 1;
    if (((cVar3 == '#') && (*pcVar4 == '#')) && (pcVar4[1] == '#')) {
      pcVar4 = pcVar4 + 2;
      uVar7 = uVar8;
    }
    else {
      uVar7 = crc32(uVar7,cVar3);
    }
    cVar3 = *pcVar4;
  } while (cVar3 != '\0');
  uVar7 = ~uVar7;
  if (*(uint *)(*plVar1 + 0x1534) == uVar7) {
    FUN_1804cf810(uVar7,0xb,"##sky_window");
  }
  plVar1 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar4 = "#sky_x";
  uVar5 = ~*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
  cVar3 = '#';
  uVar8 = uVar5;
  do {
    if (((cVar3 == '#') && (*pcVar4 == '#')) && (pcVar4[1] == '#')) {
      pcVar4 = pcVar4 + 2;
      uVar8 = uVar5;
    }
    else {
      uVar8 = crc32(uVar8,cVar3);
    }
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  uVar8 = ~uVar8;
  if (*(uint *)(*plVar1 + 0x1534) == uVar8) {
    FUN_1804cf810(uVar8,0xb,&DAT_180829b58);
  }
  plVar1 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar4 = "#sky_y";
  uVar6 = ~*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
  cVar3 = '#';
  uVar5 = uVar6;
  do {
    if (((cVar3 == '#') && (*pcVar4 == '#')) && (pcVar4[1] == '#')) {
      pcVar4 = pcVar4 + 2;
      uVar5 = uVar6;
    }
    else {
      uVar5 = crc32(uVar5,cVar3);
    }
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  uVar5 = ~uVar5;
  if (*(uint *)(*plVar1 + 0x1534) == uVar5) {
    FUN_1804cf810(uVar5,0xb,&DAT_180829b50);
  }
  if (param_1 != '\0') {
    fVar9 = *(float *)(DAT_180bb8ae8 + 0x114);
    FUN_1804b1700(lVar2,uVar8,DAT_180b0a41c * 12.0 + *(float *)(DAT_180bb8ae8 + 0x110));
    FUN_1804b1700(lVar2,uVar5,fVar9 - DAT_180b0a41c * 30.0);
    FUN_1804c7740(uVar7,0);
  }
  local_60 = FUN_1804b1470(lVar2,uVar8,0);
  local_5c = FUN_1804b1470(lVar2,uVar5,0);
  local_68 = DAT_180b0a41c * 7.0;
  local_78 = DAT_180b0a41c * 8.0;
  local_64 = local_68;
  cVar3 = FUN_1804a8290(uVar7,&local_60,DAT_180b0a41c * 190.0,&local_68);
  if (cVar3 != '\0') {
    local_40 = 0x100;
    local_58 = &DAT_180829b4c;
    local_50 = (undefined1  [16])0x0;
    plVar1 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    pcVar4 = "##sky_color";
    uVar8 = ~*(uint *)(plVar1[0x22] + -4 + (longlong)(int)plVar1[0x21] * 4);
    cVar3 = '#';
    uVar7 = uVar8;
    do {
      pcVar4 = pcVar4 + 1;
      if (((cVar3 == '#') && (*pcVar4 == '#')) && (pcVar4[1] == '#')) {
        pcVar4 = pcVar4 + 2;
        uVar7 = uVar8;
      }
      else {
        uVar7 = crc32(uVar7,cVar3);
      }
      cVar3 = *pcVar4;
    } while (cVar3 != '\0');
    uVar7 = ~uVar7;
    if (*(uint *)(*plVar1 + 0x1534) == uVar7) {
      FUN_1804cf810(uVar7,0xb,"##sky_color");
    }
    FUN_1804a3eb0(uVar7,param_2 + 0x94,&local_58);
    FUN_180458dc0(param_2);
    FUN_1804aeac0();
  }
}



