// FUN_180296d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180296d40 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180296d40(undefined2 *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_1c78 [32];
  undefined2 *local_1c58;
  undefined1 local_1c48 [24];
  undefined8 local_1c30 [893];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x180296d5a;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_1c78;
  if ((param_2 == 0) ||
     (auVar1._8_8_ = 0, auVar1._0_8_ = ~param_2,
     lVar5 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8),
     (~param_2 - lVar5 >> 1) + lVar5 >> 6 < param_3)) {
LAB_18029710c:
    *(undefined1 *)((longlong)param_1 + 1) = 0;
  }
  else {
    local_1c58 = param_1;
    FUN_18063ab10(local_1c48,0,0x1c00);
    puVar4 = local_1c30;
    lVar5 = 8;
    do {
      *(undefined1 (*) [16])(puVar4 + -3) = (undefined1  [16])0x0;
      puVar4[-1] = 0;
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      puVar4[8] = 0;
      *(undefined4 *)(puVar4 + 9) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x4c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x4e) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x56) = 0;
      *(undefined1 (*) [16])(puVar4 + 0xb) = (undefined1  [16])0x0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[0x14] = 0;
      puVar4[0x15] = 0;
      puVar4[0x16] = 0;
      *(undefined4 *)(puVar4 + 0x17) = 0;
      *(undefined2 *)((longlong)puVar4 + 0xbc) = 0;
      *(undefined8 *)((longlong)puVar4 + 0xbe) = 0;
      *(undefined2 *)((longlong)puVar4 + 0xc6) = 0;
      *(undefined1 (*) [16])(puVar4 + 0x19) = (undefined1  [16])0x0;
      puVar4[0x1b] = 0;
      puVar4[0x1c] = 0;
      puVar4[0x1d] = 0;
      puVar4[0x1e] = 0;
      puVar4[0x1f] = 0;
      puVar4[0x20] = 0;
      puVar4[0x21] = 0;
      puVar4[0x22] = 0;
      puVar4[0x23] = 0;
      puVar4[0x24] = 0;
      *(undefined4 *)(puVar4 + 0x25) = 0;
      *(undefined2 *)((longlong)puVar4 + 300) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x12e) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x136) = 0;
      *(undefined1 (*) [16])(puVar4 + 0x27) = (undefined1  [16])0x0;
      puVar4[0x29] = 0;
      puVar4[0x2a] = 0;
      puVar4[0x2b] = 0;
      puVar4[0x2c] = 0;
      puVar4[0x2d] = 0;
      puVar4[0x2e] = 0;
      puVar4[0x2f] = 0;
      puVar4[0x30] = 0;
      puVar4[0x31] = 0;
      puVar4[0x32] = 0;
      *(undefined4 *)(puVar4 + 0x33) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x19c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x19e) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x1a6) = 0;
      *(undefined1 (*) [16])(puVar4 + 0x35) = (undefined1  [16])0x0;
      puVar4[0x37] = 0;
      puVar4[0x38] = 0;
      puVar4[0x39] = 0;
      puVar4[0x3a] = 0;
      puVar4[0x3b] = 0;
      puVar4[0x3c] = 0;
      puVar4[0x3d] = 0;
      puVar4[0x3e] = 0;
      puVar4[0x3f] = 0;
      puVar4[0x40] = 0;
      *(undefined4 *)(puVar4 + 0x41) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x20c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x20e) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x216) = 0;
      *(undefined1 (*) [16])(puVar4 + 0x43) = (undefined1  [16])0x0;
      puVar4[0x45] = 0;
      puVar4[0x46] = 0;
      puVar4[0x47] = 0;
      puVar4[0x48] = 0;
      puVar4[0x49] = 0;
      puVar4[0x4a] = 0;
      puVar4[0x4b] = 0;
      puVar4[0x4c] = 0;
      puVar4[0x4d] = 0;
      puVar4[0x4e] = 0;
      *(undefined4 *)(puVar4 + 0x4f) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x27c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x27e) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x286) = 0;
      *(undefined1 (*) [16])(puVar4 + 0x51) = (undefined1  [16])0x0;
      puVar4[0x53] = 0;
      puVar4[0x54] = 0;
      puVar4[0x55] = 0;
      puVar4[0x56] = 0;
      puVar4[0x57] = 0;
      puVar4[0x58] = 0;
      puVar4[0x59] = 0;
      puVar4[0x5a] = 0;
      puVar4[0x5b] = 0;
      puVar4[0x5c] = 0;
      *(undefined4 *)(puVar4 + 0x5d) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x2ec) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2ee) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x2f6) = 0;
      *(undefined1 (*) [16])(puVar4 + 0x5f) = (undefined1  [16])0x0;
      puVar4[0x61] = 0;
      puVar4[0x62] = 0;
      puVar4[99] = 0;
      puVar4[100] = 0;
      puVar4[0x65] = 0;
      puVar4[0x66] = 0;
      puVar4[0x67] = 0;
      puVar4[0x68] = 0;
      puVar4[0x69] = 0;
      puVar4[0x6a] = 0;
      *(undefined4 *)(puVar4 + 0x6b) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x35c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x35e) = 0;
      *(undefined2 *)((longlong)puVar4 + 0x366) = 0;
      puVar4 = puVar4 + 0x70;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    iVar3 = 0;
    uVar10 = 0;
    if (param_3 != 0) {
      do {
        uVar6 = 0;
        uVar8 = 0x40;
        if (param_3 - uVar10 < 0x40) {
          uVar8 = param_3 - uVar10;
        }
        cVar2 = FUN_180182c50(local_1c48,param_2,uVar8 * 0x70);
        if (cVar2 == '\0') {
          param_1 = local_1c58;
          goto LAB_18029710c;
        }
        if (uVar8 != 0) {
          puVar9 = local_1c48;
          iVar7 = iVar3;
          do {
            iVar3 = FUN_18028eef0(param_5,puVar9);
            if (iVar3 < iVar7) {
              *local_1c58 = 0x101;
            }
            uVar6 = uVar6 + 1;
            puVar9 = puVar9 + 0x70;
            iVar7 = iVar3;
          } while (uVar6 < uVar8);
        }
        uVar10 = uVar10 + 0x40;
        param_2 = param_2 + 0x1c00;
      } while (uVar10 < param_3);
      param_1 = local_1c58;
    }
    *param_1 = 0x100;
  }
}



