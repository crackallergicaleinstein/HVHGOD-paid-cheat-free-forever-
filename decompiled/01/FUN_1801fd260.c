// FUN_1801fd260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fd260 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fd260(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  char cVar3;
  int iVar4;
  ULONGLONG UVar5;
  ulonglong uVar6;
  undefined1 local_60 [40];
  
  if (DAT_180c70edf != '\0') {
    cVar3 = FUN_1801fc860(param_1,param_3);
    if (cVar3 == '\0') {
      return;
    }
    cVar3 = FUN_1802239e0(param_3);
    if (cVar3 == '\0') {
      return;
    }
    uVar6 = 0xffffffffffffffff;
    iVar4 = DAT_180c6341c;
    if (DAT_180c6341c == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c63420) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808e7d80);
        if (iVar4 != 0) goto LAB_1801fd957;
        if (DAT_1808e7dcc == 0x7fffffff) {
          DAT_1808e7dcc = 0x7ffffffe;
          goto LAB_1801fd94c;
        }
        if ((DAT_180c6341c == 0) && (DAT_180c63420 <= UVar5)) {
          DAT_180c6341c = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
          if (DAT_180c6341c == 0) {
            DAT_180c63420 = UVar5 + 1000;
          }
          else {
            DAT_180c63420 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6341c;
        FUN_1805f68fc(&DAT_1808e7d80);
      }
    }
    *(undefined2 *)(iVar4 + param_3) = DAT_180c70ec0;
    iVar4 = DAT_180c63418;
    if (DAT_180c63418 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c63410) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808e7d30);
        if (iVar4 != 0) goto LAB_1801fd957;
        if (DAT_1808e7d7c == 0x7fffffff) {
          DAT_1808e7d7c = 0x7ffffffe;
          goto LAB_1801fd94c;
        }
        if ((DAT_180c63418 == 0) && (DAT_180c63410 <= UVar5)) {
          DAT_180c63418 = FUN_1804174b0("C_EconItemView",0x34b55816);
          if (DAT_180c63418 == 0) {
            DAT_180c63410 = UVar5 + 1000;
          }
          else {
            DAT_180c63410 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c63418;
        FUN_1805f68fc(&DAT_1808e7d30);
      }
    }
    *(undefined8 *)(iVar4 + param_3) = DAT_180c70ec8;
    iVar4 = DAT_180c63404;
    if (DAT_180c63404 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c63408) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808e7ce0);
        if (iVar4 != 0) goto LAB_1801fd957;
        if (DAT_1808e7d2c == 0x7fffffff) {
          DAT_1808e7d2c = 0x7ffffffe;
          goto LAB_1801fd94c;
        }
        if ((DAT_180c63404 == 0) && (DAT_180c63408 <= UVar5)) {
          DAT_180c63404 = FUN_1804174b0("C_EconItemView",0x373ee446);
          if (DAT_180c63404 == 0) {
            DAT_180c63408 = UVar5 + 1000;
          }
          else {
            DAT_180c63408 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c63404;
        FUN_1805f68fc(&DAT_1808e7ce0);
      }
    }
    *(undefined4 *)(iVar4 + param_3) = DAT_180c70ed0;
    iVar4 = DAT_180c63400;
    if (DAT_180c63400 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c633f8) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808e7c90);
        if (iVar4 != 0) goto LAB_1801fd957;
        if (DAT_1808e7cdc == 0x7fffffff) {
          DAT_1808e7cdc = 0x7ffffffe;
          goto LAB_1801fd94c;
        }
        if ((DAT_180c63400 == 0) && (DAT_180c633f8 <= UVar5)) {
          DAT_180c63400 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
          if (DAT_180c63400 == 0) {
            DAT_180c633f8 = UVar5 + 1000;
          }
          else {
            DAT_180c633f8 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c63400;
        FUN_1805f68fc(&DAT_1808e7c90);
      }
    }
    *(undefined4 *)(iVar4 + param_3) = DAT_180c70ed4;
    iVar4 = DAT_180c633ec;
    if (DAT_180c633ec == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c633f0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808e7c40);
        if (iVar4 != 0) goto LAB_1801fd957;
        if (DAT_1808e7c8c == 0x7fffffff) {
          DAT_1808e7c8c = 0x7ffffffe;
          goto LAB_1801fd94c;
        }
        if ((DAT_180c633ec == 0) && (DAT_180c633f0 <= UVar5)) {
          DAT_180c633ec = FUN_1804174b0("C_EconItemView",0xc65de986);
          if (DAT_180c633ec == 0) {
            DAT_180c633f0 = UVar5 + 1000;
          }
          else {
            DAT_180c633f0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c633ec;
        FUN_1805f68fc(&DAT_1808e7c40);
      }
    }
    *(undefined4 *)(iVar4 + param_3) = DAT_180c70ed8;
    iVar4 = DAT_180c633e8;
    if (DAT_180c633e8 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c633e0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808e7bf0);
        if (iVar4 != 0) goto LAB_1801fd957;
        if (DAT_1808e7c3c == 0x7fffffff) {
          DAT_1808e7c3c = 0x7ffffffe;
          goto LAB_1801fd94c;
        }
        if ((DAT_180c633e8 == 0) && (DAT_180c633e0 <= UVar5)) {
          DAT_180c633e8 = FUN_1804174b0("C_EconItemView",0x33e8ae5a);
          if (DAT_180c633e8 == 0) {
            DAT_180c633e0 = UVar5 + 1000;
          }
          else {
            DAT_180c633e0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c633e8;
        FUN_1805f68fc(&DAT_1808e7bf0);
      }
    }
    *(undefined1 *)(iVar4 + param_3) = DAT_180c70edc;
    iVar4 = DAT_180c633d4;
    if (DAT_180c633d4 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c633d8) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808e7ba0);
        if (iVar4 != 0) goto LAB_1801fd957;
        if (DAT_1808e7bec == 0x7fffffff) {
          DAT_1808e7bec = 0x7ffffffe;
          goto LAB_1801fd94c;
        }
        if ((DAT_180c633d4 == 0) && (DAT_180c633d8 <= UVar5)) {
          DAT_180c633d4 = FUN_1804174b0("C_EconItemView",0x710abdd);
          if (DAT_180c633d4 == 0) {
            DAT_180c633d8 = UVar5 + 1000;
          }
          else {
            DAT_180c633d8 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c633d4;
        FUN_1805f68fc(&DAT_1808e7ba0);
      }
    }
    *(undefined1 *)(iVar4 + param_3) = DAT_180c70edd;
    iVar4 = DAT_180c633d0;
    if (DAT_180c633d0 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c633c8) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_1805f68d0(&DAT_1808e7b50);
        if (iVar4 != 0) {
LAB_1801fd957:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808e7b9c == 0x7fffffff) {
          DAT_1808e7b9c = 0x7ffffffe;
LAB_1801fd94c:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c633d0 == 0) && (DAT_180c633c8 <= UVar5)) {
          DAT_180c633d0 = FUN_1804174b0("C_EconItemView",0x216db5e3);
          if (DAT_180c633d0 == 0) {
            uVar6 = UVar5 + 1000;
          }
          DAT_180c633c8 = uVar6;
        }
        iVar4 = DAT_180c633d0;
        FUN_1805f68fc(&DAT_1808e7b50);
      }
    }
    *(undefined1 *)(iVar4 + param_3) = DAT_180c70ede;
    FUN_1801fd970((longlong)iVar4,param_2,param_3,param_4);
    local_60._0_8_ = local_60._2_8_ << 0x10;
    _DAT_180c70ec0 = local_60._0_8_;
    DAT_180c70ec8 = 0;
    _DAT_180c70ed0 = 0;
    _DAT_180c70ed8 = 0;
    local_60._5_11_ = SUB1611((undefined1  [16])0x0,5);
    auVar2[0xb] = 0;
    auVar2._0_11_ = local_60._5_11_;
    local_60._0_12_ = auVar2 << 0x28;
    local_60._13_3_ = SUB163((undefined1  [16])0x0,0xd);
    local_60[0xc] = 0;
    auVar1._12_4_ = 0;
    auVar1._0_12_ = local_60._4_12_;
    _DAT_180c70ee0 = vinsertps_avx(auVar1 << 0x20,ZEXT816(0),0x20);
    _DAT_180c70ef0 = 0;
    DAT_180c70f00 = 0;
  }
  return;
}



