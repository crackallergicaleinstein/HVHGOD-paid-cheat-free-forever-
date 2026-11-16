// FUN_18050da90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050da90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18050da90(undefined1 (*param_1) [16],UINT param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  UINT UVar7;
  undefined8 *puVar8;
  uint lParam;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 auStack_80 [16];
  undefined1 (*local_70) [16];
  char local_68 [64];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_b8 = 0;
  local_70 = param_1;
  switch(param_2) {
  case 0:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,&DAT_1808007b0,4);
    break;
  case 1:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Mouse 1",7);
    break;
  case 2:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Mouse 2",7);
    break;
  default:
    local_68[0] = '\0';
    local_68[1] = '\0';
    local_68[2] = '\0';
    local_68[3] = '\0';
    local_68[4] = '\0';
    local_68[5] = '\0';
    local_68[6] = '\0';
    local_68[7] = '\0';
    local_68[8] = '\0';
    local_68[9] = '\0';
    local_68[10] = '\0';
    local_68[0xb] = '\0';
    local_68[0xc] = '\0';
    local_68[0xd] = '\0';
    local_68[0xe] = '\0';
    local_68[0xf] = '\0';
    local_68[0x10] = '\0';
    local_68[0x11] = '\0';
    local_68[0x12] = '\0';
    local_68[0x13] = '\0';
    local_68[0x14] = '\0';
    local_68[0x15] = '\0';
    local_68[0x16] = '\0';
    local_68[0x17] = '\0';
    local_68[0x18] = '\0';
    local_68[0x19] = '\0';
    local_68[0x1a] = '\0';
    local_68[0x1b] = '\0';
    local_68[0x1c] = '\0';
    local_68[0x1d] = '\0';
    local_68[0x1e] = '\0';
    local_68[0x1f] = '\0';
    local_68[0x20] = '\0';
    local_68[0x21] = '\0';
    local_68[0x22] = '\0';
    local_68[0x23] = '\0';
    local_68[0x24] = '\0';
    local_68[0x25] = '\0';
    local_68[0x26] = '\0';
    local_68[0x27] = '\0';
    local_68[0x28] = '\0';
    local_68[0x29] = '\0';
    local_68[0x2a] = '\0';
    local_68[0x2b] = '\0';
    local_68[0x2c] = '\0';
    local_68[0x2d] = '\0';
    local_68[0x2e] = '\0';
    local_68[0x2f] = '\0';
    local_68[0x30] = '\0';
    local_68[0x31] = '\0';
    local_68[0x32] = '\0';
    local_68[0x33] = '\0';
    local_68[0x34] = '\0';
    local_68[0x35] = '\0';
    local_68[0x36] = '\0';
    local_68[0x37] = '\0';
    local_68[0x38] = '\0';
    local_68[0x39] = '\0';
    local_68[0x3a] = '\0';
    local_68[0x3b] = '\0';
    local_68[0x3c] = '\0';
    local_68[0x3d] = '\0';
    local_68[0x3e] = '\0';
    local_68[0x3f] = '\0';
    local_28 = (undefined1  [16])0x0;
    bVar5 = false;
    bVar4 = true;
    UVar7 = MapVirtualKeyA(param_2,4);
    lParam = (UVar7 & 0xff) << 0x10;
    if ((UVar7 & 0xff00) != 0) {
      lParam = lParam | 0x1000000;
    }
    GetKeyNameTextA(lParam,local_68,0x50);
    if (local_68[0] == '\0') {
      local_b0 = (undefined1  [16])0x0;
      local_a0 = (undefined1  [16])0x0;
      FUN_18015ba30(local_b0,"Unassigned",10);
      puVar8 = (undefined8 *)local_b0;
    }
    else {
      local_90 = (undefined1  [16])0x0;
      auStack_80 = (undefined1  [16])0x0;
      lVar9 = -1;
      do {
        lVar6 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (local_68[lVar6] != '\0');
      FUN_18015ba30(local_90,local_68);
      puVar8 = (undefined8 *)local_90;
      bVar5 = true;
      bVar4 = false;
    }
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    uVar3 = puVar8[3];
    *(undefined8 *)*param_1 = *puVar8;
    *(undefined8 *)(*param_1 + 8) = uVar1;
    *(undefined8 *)param_1[1] = uVar2;
    *(undefined8 *)(param_1[1] + 8) = uVar3;
    *(undefined1 *)puVar8 = 0;
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    if (bVar4) {
      FUN_18015c010(local_b0);
    }
    if (bVar5) {
      FUN_18015c010(local_90);
    }
    break;
  case 4:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Mouse 3",7);
    break;
  case 5:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Mouse 4",7);
    break;
  case 6:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Mouse 5",7);
    break;
  case 8:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Backspace",9);
    break;
  case 0x1b:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Escape",6);
    break;
  case 0x21:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Page Up",7);
    break;
  case 0x22:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Page Down",9);
    break;
  case 0x23:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,&DAT_18082aac8,3);
    break;
  case 0x24:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,&DAT_180859e58,4);
    break;
  case 0x25:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Left Arrow",10);
    break;
  case 0x26:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Up Arrow",8);
    break;
  case 0x27:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Right Arrow",0xb);
    break;
  case 0x28:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Down Arrow",10);
    break;
  case 0x2c:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Print Screen",0xc);
    break;
  case 0x2d:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Insert",6);
    break;
  case 0x2e:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Delete",6);
    break;
  case 0x5b:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Left Windows",0xc);
    break;
  case 0x5c:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,"Right Windows",0xd);
    break;
  case 0x5d:
    *param_1 = (undefined1  [16])0x0;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = 0;
    FUN_18015ba30(param_1,&DAT_180859f18,4);
  }
}



