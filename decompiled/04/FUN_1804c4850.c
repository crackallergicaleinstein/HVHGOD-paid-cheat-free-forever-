// FUN_1804c4850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c4850 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804c4850(undefined8 param_1,int *param_2,undefined8 param_3)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [32];
  char *local_48;
  char *local_38 [3];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  iVar2 = *param_2;
  if (iVar2 == 1) {
    if (((float)param_2[3] == -3.4028235e+38) && ((float)param_2[4] == -3.4028235e+38)) {
      if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 0x80) != 0) {
        FUN_1804cf3e0("[io] %s: MousePos (-FLT_MAX, -FLT_MAX)\n",param_1);
      }
    }
    else if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      FUN_1804cf3e0("[io] %s: MousePos (%.1f, %.1f) (%s)\n",param_1,(double)(float)param_2[3],
                    (double)(float)param_2[4]);
    }
  }
  else if (iVar2 == 3) {
    if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      puVar4 = &DAT_180858288;
      if ((char)param_2[4] != '\0') {
        puVar4 = &DAT_18085828c;
      }
      FUN_1804cf3e0("[io] %s: MouseButton %d %s (%s)\n",param_1,param_2[3],puVar4);
    }
  }
  else if (iVar2 == 2) {
    if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 0x80) != 0) {
      local_38[0] = "Mouse";
      local_38[1] = "TouchScreen";
      local_38[2] = "Pen";
      if ((uint)param_2[5] < 3) {
        local_48 = local_38[param_2[5]];
      }
      else {
        local_48 = "Unknown";
      }
      FUN_1804cf3e0("[io] %s: MouseWheel (%.3f, %.3f) (%s)\n",param_1,(double)(float)param_2[3],
                    (double)(float)param_2[4]);
    }
  }
  else if (iVar2 == 4) {
    if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 0x80) != 0) {
      puVar4 = &DAT_180858288;
      if ((char)param_2[4] != '\0') {
        puVar4 = &DAT_18085828c;
      }
      uVar3 = FUN_1804c2a40(param_2[3],param_2,param_3,puVar4);
      FUN_1804cf3e0("[io] %s: Key \"%s\" %s\n",param_1,uVar3);
    }
  }
  else if (iVar2 == 5) {
    uVar6 = (ulonglong)(uint)param_2[3];
    lVar5 = DAT_180bb8ae8;
    iVar2 = FUN_1804b1000(local_20,param_2,uVar6);
    bVar1 = *(byte *)(lVar5 + 0x28cc);
    local_20[iVar2] = 0;
    if ((bVar1 & 0x80) != 0) {
      FUN_1804cf3e0("[io] %s: Text: \'%s\' (U+%08X)\n",param_1,local_20,uVar6 & 0xffffffff);
    }
  }
  else if ((iVar2 == 6) && ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 0x80) != 0)) {
    FUN_1804cf3e0("[io] %s: AppFocused %d\n",param_1,(char)param_2[3]);
  }
}



