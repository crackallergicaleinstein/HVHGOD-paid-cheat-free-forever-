// FUN_180449110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180449110 */

undefined8 FUN_180449110(undefined8 param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  uVar2 = FUN_180445790(param_1,param_3,*(undefined8 *)(param_3 + 0x10));
  if (uVar2 < 0x41) {
    if (uVar2 == 0x40) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      if (*param_2 == '\0') {
        if (*(ulonglong *)(param_2 + 0x30) < lVar5 + 10U) {
          return 0x80100009;
        }
        lVar5 = lVar5 + *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar5 + -1) = 0x74702064726f7771;
        *(undefined2 *)(lVar5 + 7) = 0x2072;
        *(undefined1 *)(lVar5 + 9) = 0;
        *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 10;
        return 0x100000;
      }
      if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0x10U) {
        return 0x80100009;
      }
      *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
      uVar7 = 0x2064726f77710a0c;
    }
    else {
      if (uVar2 == 8) {
        lVar5 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (*(ulonglong *)(param_2 + 0x30) < lVar5 + 9U) {
            return 0x80100009;
          }
          lVar1 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar1 + -1 + lVar5) = 0x7274702065747962;
          *(undefined2 *)(lVar1 + 7 + lVar5) = 0x20;
          *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 9;
          return 0x100000;
        }
        if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0xfU) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar5);
        *puVar6 = 0x702065747962090c;
        *(undefined4 *)(puVar6 + 1) = 0x1007274;
        *(undefined2 *)((longlong)puVar6 + 0xc) = 0x2000;
        *(undefined1 *)((longlong)puVar6 + 0xe) = 0;
        lVar5 = lVar5 + 0xd;
        goto LAB_18044918d;
      }
      if (uVar2 == 0x10) {
        lVar5 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (*(ulonglong *)(param_2 + 0x30) < lVar5 + 9U) {
            return 0x80100009;
          }
          lVar1 = *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar1 + -1 + lVar5) = 0x7274702064726f77;
          *(undefined2 *)(lVar1 + 7 + lVar5) = 0x20;
          *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 9;
          return 0x100000;
        }
        if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0xfU) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
        puVar6 = (undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar5);
        *puVar6 = 0x702064726f77090c;
        *(undefined4 *)(puVar6 + 1) = 0x1007274;
        *(undefined2 *)((longlong)puVar6 + 0xc) = 0x2000;
        *(undefined1 *)((longlong)puVar6 + 0xe) = 0;
        lVar5 = lVar5 + 0xd;
        goto LAB_18044918d;
      }
      if (uVar2 == 0x20) {
        lVar5 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (*(ulonglong *)(param_2 + 0x30) < lVar5 + 10U) {
            return 0x80100009;
          }
          lVar5 = lVar5 + *(longlong *)(param_2 + 0x48);
          *(undefined8 *)(lVar5 + -1) = 0x74702064726f7764;
          *(undefined2 *)(lVar5 + 7) = 0x2072;
          *(undefined1 *)(lVar5 + 9) = 0;
          *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 10;
          return 0x100000;
        }
        if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0x10U) {
          return 0x80100009;
        }
        *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
        lVar1 = *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar5 + lVar1) = 0x2064726f77640a0c;
        ((undefined8 *)(lVar5 + lVar1))[1] = 0x20000100727470;
        param_2[0x28] = '\x02';
        param_2[0x29] = '\0';
        param_2[0x2a] = '\0';
        param_2[0x2b] = '\0';
        param_2[0x2c] = '\0';
        param_2[0x2d] = '\0';
        param_2[0x2e] = '\0';
        param_2[0x2f] = '\0';
        *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5 + 0xe;
        uVar4 = *(longlong *)(param_2 + 8) - (lVar5 + 0xe);
        *(ulonglong *)(param_2 + 8) = uVar4;
        uVar3 = 0xff;
        if (uVar4 < 0xff) {
          uVar3 = uVar4;
        }
        *(ulonglong *)(param_2 + 0x30) = uVar3;
        return 0x100000;
      }
      if (uVar2 != 0x30) {
        return 0x100000;
      }
      lVar5 = *(longlong *)(param_2 + 0x28);
      if (*param_2 == '\0') {
        if (*(ulonglong *)(param_2 + 0x30) < lVar5 + 10U) {
          return 0x80100009;
        }
        lVar5 = lVar5 + *(longlong *)(param_2 + 0x48);
        *(undefined8 *)(lVar5 + -1) = 0x74702064726f7766;
        *(undefined2 *)(lVar5 + 7) = 0x2072;
        *(undefined1 *)(lVar5 + 9) = 0;
        *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 10;
        return 0x100000;
      }
      if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0x10U) {
        return 0x80100009;
      }
      *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
      uVar7 = 0x2064726f77660a0c;
    }
  }
  else {
    if (uVar2 != 0x50) {
      if (uVar2 == 0x80) {
        lVar5 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (lVar5 + 0xcU <= *(ulonglong *)(param_2 + 0x30)) {
            lVar1 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar1 + -1 + lVar5) = 0x2064726f776d6d78;
            *(undefined4 *)(lVar1 + 7 + lVar5) = 0x20727470;
            *(undefined1 *)(lVar1 + 0xb + lVar5) = 0;
            *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 0xc;
            return 0x100000;
          }
        }
        else if (lVar5 + 0x12U < *(ulonglong *)(param_2 + 8)) {
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
          lVar1 = *(longlong *)(param_2 + 0x48);
          puVar6 = (undefined8 *)(lVar1 + lVar5);
          *puVar6 = 0x726f776d6d780c0c;
          puVar6[1] = 0x1007274702064;
          *(undefined2 *)(lVar1 + 0x10 + lVar5) = 0x20;
          lVar5 = lVar5 + 0x10;
          goto LAB_18044918d;
        }
      }
      else if (uVar2 == 0x100) {
        lVar5 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (lVar5 + 0xcU <= *(ulonglong *)(param_2 + 0x30)) {
            lVar1 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar1 + -1 + lVar5) = 0x2064726f776d6d79;
            *(undefined4 *)(lVar1 + 7 + lVar5) = 0x20727470;
            *(undefined1 *)(lVar1 + 0xb + lVar5) = 0;
            *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 0xc;
            return 0x100000;
          }
        }
        else if (lVar5 + 0x12U < *(ulonglong *)(param_2 + 8)) {
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
          lVar1 = *(longlong *)(param_2 + 0x48);
          puVar6 = (undefined8 *)(lVar1 + lVar5);
          *puVar6 = 0x726f776d6d790c0c;
          puVar6[1] = 0x1007274702064;
          *(undefined2 *)(lVar1 + 0x10 + lVar5) = 0x20;
          lVar5 = lVar5 + 0x10;
          goto LAB_18044918d;
        }
      }
      else {
        if (uVar2 != 0x200) {
          return 0x100000;
        }
        lVar5 = *(longlong *)(param_2 + 0x28);
        if (*param_2 == '\0') {
          if (lVar5 + 0xcU <= *(ulonglong *)(param_2 + 0x30)) {
            lVar1 = *(longlong *)(param_2 + 0x48);
            *(undefined8 *)(lVar1 + -1 + lVar5) = 0x2064726f776d6d7a;
            *(undefined4 *)(lVar1 + 7 + lVar5) = 0x20727470;
            *(undefined1 *)(lVar1 + 0xb + lVar5) = 0;
            *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 0xc;
            return 0x100000;
          }
        }
        else if (lVar5 + 0x12U < *(ulonglong *)(param_2 + 8)) {
          *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
          lVar1 = *(longlong *)(param_2 + 0x48);
          puVar6 = (undefined8 *)(lVar1 + lVar5);
          *puVar6 = 0x726f776d6d7a0c0c;
          puVar6[1] = 0x1007274702064;
          *(undefined2 *)(lVar1 + 0x10 + lVar5) = 0x20;
          lVar5 = lVar5 + 0x10;
          goto LAB_18044918d;
        }
      }
      return 0x80100009;
    }
    lVar5 = *(longlong *)(param_2 + 0x28);
    if (*param_2 == '\0') {
      if (*(ulonglong *)(param_2 + 0x30) < lVar5 + 10U) {
        return 0x80100009;
      }
      lVar5 = lVar5 + *(longlong *)(param_2 + 0x48);
      *(undefined8 *)(lVar5 + -1) = 0x7470206574796274;
      *(undefined2 *)(lVar5 + 7) = 0x2072;
      *(undefined1 *)(lVar5 + 9) = 0;
      *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 10;
      return 0x100000;
    }
    if (*(ulonglong *)(param_2 + 8) <= lVar5 + 0x10U) {
      return 0x80100009;
    }
    *(char *)(*(longlong *)(param_2 + 0x48) + -1) = (char)lVar5;
    uVar7 = 0x2065747962740a0c;
  }
  lVar1 = *(longlong *)(param_2 + 0x48);
  *(undefined8 *)(lVar5 + lVar1) = uVar7;
  ((undefined8 *)(lVar5 + lVar1))[1] = 0x20000100727470;
  lVar5 = lVar5 + 0xe;
LAB_18044918d:
  *(longlong *)(param_2 + 0x48) = *(longlong *)(param_2 + 0x48) + lVar5;
  uVar4 = *(longlong *)(param_2 + 8) - lVar5;
  param_2[0x28] = '\x02';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  *(ulonglong *)(param_2 + 8) = uVar4;
  uVar3 = 0xff;
  if (uVar4 < 0xff) {
    uVar3 = uVar4;
  }
  *(ulonglong *)(param_2 + 0x30) = uVar3;
  return 0x100000;
}



